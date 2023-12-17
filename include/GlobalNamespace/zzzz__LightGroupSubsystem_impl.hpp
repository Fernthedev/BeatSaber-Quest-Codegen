#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupSubsystem.get_groupId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LightGroupSubsystem::*)()>(&::GlobalNamespace::LightGroupSubsystem::get_groupId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23a5f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupSubsystem*>::get(),
                            "get_groupId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSubsystem.get_lightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroup* (::GlobalNamespace::LightGroupSubsystem::*)()>(&::GlobalNamespace::LightGroupSubsystem::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a99a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupSubsystem*>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSubsystem.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupSubsystem::*)()>(&::GlobalNamespace::LightGroupSubsystem::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x23a99b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupSubsystem*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupSubsystem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupSubsystem::*)()>(&::GlobalNamespace::LightGroupSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupSubsystem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightGroupSubsystem::__set__lightGroup(::GlobalNamespace::LightGroup*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightGroup*, 0x18>(this, std::forward<::GlobalNamespace::LightGroup*>(value));
}
constexpr ::GlobalNamespace::LightGroup* GlobalNamespace::LightGroupSubsystem::__get__lightGroup()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroup*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroup*> GlobalNamespace::LightGroupSubsystem::__get__lightGroup() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroup*, 0x18>(this);
}
inline int32_t GlobalNamespace::LightGroupSubsystem::get_groupId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupSubsystem*>::get(),
                            "get_groupId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LightGroup* GlobalNamespace::LightGroupSubsystem::get_lightGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupSubsystem*>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightGroup*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightGroupSubsystem::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupSubsystem*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LightGroupSubsystem* GlobalNamespace::LightGroupSubsystem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightGroupSubsystem*>());
}
inline void GlobalNamespace::LightGroupSubsystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupSubsystem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
