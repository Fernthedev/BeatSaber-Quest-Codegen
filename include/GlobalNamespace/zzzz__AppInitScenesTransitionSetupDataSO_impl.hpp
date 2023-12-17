#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
constexpr void GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::DoNotOverride{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::AppStart{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::AppRestart{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType::MultiSceneEditor{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.get_appInitOverrideStartType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType (::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)()>(&::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe23674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                            "get_appInitOverrideStartType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData.set_appInitOverrideStartType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType)>(&::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_appInitOverrideStartType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe2367c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                            "set_appInitOverrideStartType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::*)(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType)>(&::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe1dcb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__set__appInitOverrideStartType_k__BackingField(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, 0x10>(this, std::forward<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>(value));
}
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType& GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__get__appInitOverrideStartType_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, 0x10>(this);
}
constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType const& GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::__get__appInitOverrideStartType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, 0x10>(this);
}
inline ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::get_appInitOverrideStartType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                            "get_appInitOverrideStartType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::set_appInitOverrideStartType(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                            "set_appInitOverrideStartType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::New_ctor(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  appInitOverrideStartType)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>(appInitOverrideStartType));
}
inline void GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData::_ctor(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  appInitOverrideStartType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, appInitOverrideStartType);
}
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe23428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.InitAsAppStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe23584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                            "InitAsAppStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO.__Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType)>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe235f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                            "__Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataSO::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe23664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::InitAsAppStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                            "InitAsAppStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::__Init(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType  appInitOverrideStartType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                            "__Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitOverrideStartType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, appInitOverrideStartType);
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupDataSO* GlobalNamespace::AppInitScenesTransitionSetupDataSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>());
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
