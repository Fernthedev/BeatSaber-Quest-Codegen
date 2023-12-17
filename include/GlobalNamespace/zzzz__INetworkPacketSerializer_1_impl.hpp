#pragma once
#include "GlobalNamespace/zzzz__INetworkPacketSerializer_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
template<typename TData>
inline void GlobalNamespace::INetworkPacketSerializer_1<TData>::ProcessAllPackets(::LiteNetLib::Utils::NetDataReader*  reader, TData  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INetworkPacketSerializer_1<TData>*>::get(),
                            "ProcessAllPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader, data);
}
template<typename TData>
inline void GlobalNamespace::INetworkPacketSerializer_1<TData>::SerializePacket(::LiteNetLib::Utils::NetDataWriter*  writer, ::LiteNetLib::Utils::INetSerializable*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INetworkPacketSerializer_1<TData>*>::get(),
                            "SerializePacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer, packet);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
