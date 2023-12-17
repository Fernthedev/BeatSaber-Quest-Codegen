#pragma once
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectMultiplayerLobbyDestination._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectMultiplayerLobbyDestination::*)(::StringW, ::StringW)>(&::GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x223cfa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectMultiplayerLobbyDestination._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectMultiplayerLobbyDestination::*)(uint64_t)>(&::GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x223cfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectMultiplayerLobbyDestination._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectMultiplayerLobbyDestination::*)(::StringW)>(&::GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x223dd28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SelectMultiplayerLobbyDestination::__set_lobbySecret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::SelectMultiplayerLobbyDestination::__get_lobbySecret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::SelectMultiplayerLobbyDestination::__get_lobbySecret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::SelectMultiplayerLobbyDestination::__set_lobbyCode(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::SelectMultiplayerLobbyDestination::__get_lobbyCode()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::SelectMultiplayerLobbyDestination::__get_lobbyCode() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor(::StringW  lobbySecret, ::StringW  lobbyCode)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(lobbySecret, lobbyCode));
}
inline void GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor(::StringW  lobbySecret, ::StringW  lobbyCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lobbySecret, lobbyCode);
}
inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor(uint64_t  roomId)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(roomId));
}
inline void GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor(uint64_t  roomId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, roomId);
}
inline ::GlobalNamespace::SelectMultiplayerLobbyDestination* GlobalNamespace::SelectMultiplayerLobbyDestination::New_ctor(::StringW  lobbyCode)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectMultiplayerLobbyDestination*>(lobbyCode));
}
inline void GlobalNamespace::SelectMultiplayerLobbyDestination::_ctor(::StringW  lobbyCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lobbyCode);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
