#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "TrackDefinitions/zzzz__LightGroupDuplicationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
//  Writing Method size for method: ::TrackDefinitions::LightGroupDuplicationGroup.get_duplicationGroupName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TrackDefinitions::LightGroupDuplicationGroup::*)()>(&::TrackDefinitions::LightGroupDuplicationGroup::get_duplicationGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                            "get_duplicationGroupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::LightGroupDuplicationGroup.get_lightGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> (::TrackDefinitions::LightGroupDuplicationGroup::*)()>(&::TrackDefinitions::LightGroupDuplicationGroup::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                            "get_lightGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::LightGroupDuplicationGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::LightGroupDuplicationGroup::*)()>(&::TrackDefinitions::LightGroupDuplicationGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TrackDefinitions::LightGroupDuplicationGroup::__set__duplicationGroupName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TrackDefinitions::LightGroupDuplicationGroup::__get__duplicationGroupName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& TrackDefinitions::LightGroupDuplicationGroup::__get__duplicationGroupName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void TrackDefinitions::LightGroupDuplicationGroup::__set__lightGroups(::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>& TrackDefinitions::LightGroupDuplicationGroup::__get__lightGroups()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> const& TrackDefinitions::LightGroupDuplicationGroup::__get__lightGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x20>(this);
}
inline ::StringW TrackDefinitions::LightGroupDuplicationGroup::get_duplicationGroupName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                            "get_duplicationGroupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> TrackDefinitions::LightGroupDuplicationGroup::get_lightGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                            "get_lightGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::LightGroupDuplicationGroup* TrackDefinitions::LightGroupDuplicationGroup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::LightGroupDuplicationGroup*>());
}
inline void TrackDefinitions::LightGroupDuplicationGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
