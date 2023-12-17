#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Deeplink_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Deeplink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Deeplink::*)()>(&::GlobalNamespace::Deeplink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223d0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Deeplink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::Deeplink::__set_Destination(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__get_Destination()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__get_Destination() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::Deeplink::__set_LevelID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__get_LevelID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__get_LevelID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::Deeplink::__set_PackID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__get_PackID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__get_PackID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::Deeplink::__set_Difficulty(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__get_Difficulty()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__get_Difficulty() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void GlobalNamespace::Deeplink::__set_Characteristic(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__get_Characteristic()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__get_Characteristic() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void GlobalNamespace::Deeplink::__set_MultiplayerLobbyCode(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__get_MultiplayerLobbyCode()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__get_MultiplayerLobbyCode() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void GlobalNamespace::Deeplink::__set_MultiplayerSecret(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::Deeplink::__get_MultiplayerSecret()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& GlobalNamespace::Deeplink::__get_MultiplayerSecret() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void GlobalNamespace::Deeplink::__set_MultiplayerRoomId(uint64_t  value)  {
::cordl_internals::setInstanceField<uint64_t, 0x48>(this, std::forward<uint64_t>(value));
}
constexpr uint64_t& GlobalNamespace::Deeplink::__get_MultiplayerRoomId()  {
return ::cordl_internals::getInstanceField<uint64_t, 0x48>(this);
}
constexpr uint64_t const& GlobalNamespace::Deeplink::__get_MultiplayerRoomId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x48>(this);
}
inline ::GlobalNamespace::Deeplink* GlobalNamespace::Deeplink::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::Deeplink*>());
}
inline void GlobalNamespace::Deeplink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Deeplink*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
