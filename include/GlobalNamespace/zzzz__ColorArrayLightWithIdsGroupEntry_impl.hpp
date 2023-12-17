#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__ColorArrayLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry.get_lightGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> (::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>::get(),
                            "get_lightGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::ColorArrayLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__colorArrayLightWithIds(::GlobalNamespace::ColorArrayLightWithIds*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorArrayLightWithIds*, 0x18>(this, std::forward<::GlobalNamespace::ColorArrayLightWithIds*>(value));
}
constexpr ::GlobalNamespace::ColorArrayLightWithIds* GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__colorArrayLightWithIds()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorArrayLightWithIds*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorArrayLightWithIds*> GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__colorArrayLightWithIds() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorArrayLightWithIds*, 0x18>(this);
}
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__lightGroups(::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__lightGroups()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> const& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__lightGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__set__excludedLightIds(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x28>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__excludedLightIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x28>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& GlobalNamespace::ColorArrayLightWithIdsGroupEntry::__get__excludedLightIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x28>(this);
}
inline ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> GlobalNamespace::ColorArrayLightWithIdsGroupEntry::get_lightGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>::get(),
                            "get_lightGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ColorArrayLightWithIdsGroupEntry* GlobalNamespace::ColorArrayLightWithIdsGroupEntry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>());
}
inline void GlobalNamespace::ColorArrayLightWithIdsGroupEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ColorArrayLightWithIdsGroupEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
