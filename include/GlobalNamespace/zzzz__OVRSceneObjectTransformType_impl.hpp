#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneObjectTransformType_def.hpp"
constexpr void GlobalNamespace::__OVRSceneObjectTransformType__Transformation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRSceneObjectTransformType__Transformation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRSceneObjectTransformType__Transformation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation::__OVRSceneObjectTransformType__Transformation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation  GlobalNamespace::__OVRSceneObjectTransformType__Transformation::Volume{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation  GlobalNamespace::__OVRSceneObjectTransformType__Transformation::Plane{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation  GlobalNamespace::__OVRSceneObjectTransformType__Transformation::None{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::OVRSceneObjectTransformType._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRSceneObjectTransformType::*)()>(&::GlobalNamespace::OVRSceneObjectTransformType::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2786ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneObjectTransformType*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRSceneObjectTransformType::__set_TransformType(::GlobalNamespace::__OVRSceneObjectTransformType__Transformation  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRSceneObjectTransformType__Transformation, 0x18>(this, std::forward<::GlobalNamespace::__OVRSceneObjectTransformType__Transformation>(value));
}
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation& GlobalNamespace::OVRSceneObjectTransformType::__get_TransformType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRSceneObjectTransformType__Transformation, 0x18>(this);
}
constexpr ::GlobalNamespace::__OVRSceneObjectTransformType__Transformation const& GlobalNamespace::OVRSceneObjectTransformType::__get_TransformType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRSceneObjectTransformType__Transformation, 0x18>(this);
}
inline ::GlobalNamespace::OVRSceneObjectTransformType* GlobalNamespace::OVRSceneObjectTransformType::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRSceneObjectTransformType*>());
}
inline void GlobalNamespace::OVRSceneObjectTransformType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRSceneObjectTransformType*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
