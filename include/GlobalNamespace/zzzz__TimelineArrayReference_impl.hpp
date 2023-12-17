#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
constexpr void GlobalNamespace::__TimelineArrayReference__ArrayTypes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__TimelineArrayReference__ArrayTypes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__TimelineArrayReference__ArrayTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes::__TimelineArrayReference__ArrayTypes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes  GlobalNamespace::__TimelineArrayReference__ArrayTypes::TubeLight{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes  GlobalNamespace::__TimelineArrayReference__ArrayTypes::Transform{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes  GlobalNamespace::__TimelineArrayReference__ArrayTypes::Canvas{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes  GlobalNamespace::__TimelineArrayReference__ArrayTypes::TextMeshPro{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes  GlobalNamespace::__TimelineArrayReference__ArrayTypes::DirectionalLight{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::TimelineArrayReference._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TimelineArrayReference::*)()>(&::GlobalNamespace::TimelineArrayReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2317d00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelineArrayReference*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TimelineArrayReference::__set_arrayType(::GlobalNamespace::__TimelineArrayReference__ArrayTypes  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__TimelineArrayReference__ArrayTypes, 0x18>(this, std::forward<::GlobalNamespace::__TimelineArrayReference__ArrayTypes>(value));
}
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes& GlobalNamespace::TimelineArrayReference::__get_arrayType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TimelineArrayReference__ArrayTypes, 0x18>(this);
}
constexpr ::GlobalNamespace::__TimelineArrayReference__ArrayTypes const& GlobalNamespace::TimelineArrayReference::__get_arrayType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__TimelineArrayReference__ArrayTypes, 0x18>(this);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__tubeLightArray(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::TimelineArrayReference::__get__tubeLightArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::TimelineArrayReference::__get__tubeLightArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__canvasGroupArray(::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x28>(this, std::forward<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>& GlobalNamespace::TimelineArrayReference::__get__canvasGroupArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x28>(this);
}
constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*> const& GlobalNamespace::TimelineArrayReference::__get__canvasGroupArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>, 0x28>(this);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__tmproArray(::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>, 0x30>(this, std::forward<::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>>(value));
}
constexpr ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>& GlobalNamespace::TimelineArrayReference::__get__tmproArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>, 0x30>(this);
}
constexpr ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*> const& GlobalNamespace::TimelineArrayReference::__get__tmproArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>, 0x30>(this);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__transformArray(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x38>(this, std::forward<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& GlobalNamespace::TimelineArrayReference::__get__transformArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x38>(this);
}
constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::TimelineArrayReference::__get__transformArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x38>(this);
}
constexpr void GlobalNamespace::TimelineArrayReference::__set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x40>(this, std::forward<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>& GlobalNamespace::TimelineArrayReference::__get__directionalLights()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x40>(this);
}
constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*> const& GlobalNamespace::TimelineArrayReference::__get__directionalLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>, 0x40>(this);
}
inline ::GlobalNamespace::TimelineArrayReference* GlobalNamespace::TimelineArrayReference::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TimelineArrayReference*>());
}
inline void GlobalNamespace::TimelineArrayReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelineArrayReference*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
