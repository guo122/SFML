////////////////////////////////////////////////////////////
//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2009 Laurent Gomila (laurent.gom@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
/// Add a socket to watch
////////////////////////////////////////////////////////////
template <typename Type>
void Selector<Type>::Add(Type socket)
{
    if (socket.IsValid())
    {
        SelectorBase::Add(socket.mySocket);
        mySockets[socket.mySocket] = socket;
    }
}


////////////////////////////////////////////////////////////
/// Remove a socket
////////////////////////////////////////////////////////////
template <typename Type>
void Selector<Type>::Remove(Type socket)
{
    typename SocketTable::iterator it = mySockets.find(socket.mySocket);
    if (it != mySockets.end())
    {
        SelectorBase::Remove(socket.mySocket);
        mySockets.erase(it);
    }
}


////////////////////////////////////////////////////////////
/// Remove all sockets
////////////////////////////////////////////////////////////
template <typename Type>
void Selector<Type>::Clear()
{
    SelectorBase::Clear();
    mySockets.clear();
}


////////////////////////////////////////////////////////////
/// Wait and collect sockets which are ready for reading.
/// This functions will return either when at least one socket
/// is ready, or when the given time is out
////////////////////////////////////////////////////////////
template <typename Type>
unsigned int Selector<Type>::Wait(float timeout)
{
    // No socket in the selector : return 0
    if (mySockets.empty())
        return 0;

    return SelectorBase::Wait(timeout);
}


////////////////////////////////////////////////////////////
/// After a call to Wait(), get the Index-th socket which is
/// ready for reading. The total number of sockets ready
/// is the integer returned by the previous call to Wait()
////////////////////////////////////////////////////////////
template <typename Type>
Type Selector<Type>::GetSocketReady(unsigned int index)
{
    SocketHelper::SocketType socket = SelectorBase::GetSocketReady(index);

    typename SocketTable::const_iterator it = mySockets.find(socket);
    if (it != mySockets.end())
        return it->second;
    else
        return Type(socket);
}
