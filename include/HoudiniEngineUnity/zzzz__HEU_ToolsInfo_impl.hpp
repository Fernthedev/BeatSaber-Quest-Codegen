#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
constexpr void HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode::__HEU_ToolsInfo__PaintMergeMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode  HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode::REPLACE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode  HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode::ADD{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode  HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode::SUBTRACT{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode  HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode::MULTIPLY{static_cast<int32_t>(0x3)};
constexpr void HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility::__HEU_ToolsInfo__PaintMeshVisibility(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility  HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility::AUTO{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility  HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility::SHOW{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility  HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility::HIDE{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ToolsInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ToolsInfo::*)(::HoudiniEngineUnity::HEU_ToolsInfo*)>(&::HoudiniEngineUnity::HEU_ToolsInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x21e9694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ToolsInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ToolsInfo::*)()>(&::HoudiniEngineUnity::HEU_ToolsInfo::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x21e9cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ToolsInfo*>"
constexpr  HoudiniEngineUnity::HEU_ToolsInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ToolsInfo*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ToolsInfo*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintBrushSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintBrushSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintBrushSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintBrushOpacity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintBrushOpacity()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintBrushOpacity() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintIntValue(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintIntValue()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintIntValue() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintFloatValue(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintFloatValue()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintFloatValue() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintStringValue(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintStringValue()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintStringValue() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__lastAttributesGeoID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributesGeoID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributesGeoID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__lastAttributesPartID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributesPartID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributesPartID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__lastAttributeNodeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributeNodeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributeNodeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__lastAttributeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__brushHandleColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x50>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_ToolsInfo::__get__brushHandleColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x50>(this);
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_ToolsInfo::__get__brushHandleColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x50>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__affectedAreaPaintColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x60>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_ToolsInfo::__get__affectedAreaPaintColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this);
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_ToolsInfo::__get__affectedAreaPaintColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__liveUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__get__liveUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__get__liveUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__isPainting(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x71>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__get__isPainting()  {
return ::cordl_internals::getInstanceField<bool, 0x71>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__get__isPainting() const {
return ::cordl_internals::getInstanceField<bool, 0x71>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__editPointBoxSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__editPointBoxUnselectedColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x78>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxUnselectedColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxUnselectedColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x78>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__editPointBoxSelectedColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x88>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxSelectedColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x88>(this);
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxSelectedColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x88>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__recacheRequired(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__get__recacheRequired()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__get__recacheRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintMergeMode(::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode, 0x9c>(this, std::forward<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintMergeMode()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode, 0x9c>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode const& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintMergeMode() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMergeMode, 0x9c>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__showOnlyEditGeometry(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__get__showOnlyEditGeometry()  {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__get__showOnlyEditGeometry() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__alwaysCookUpstream(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa1>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_ToolsInfo::__get__alwaysCookUpstream()  {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_ToolsInfo::__get__alwaysCookUpstream() const {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintMeshVisiblity(::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility, 0xa4>(this, std::forward<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility>(value));
}
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintMeshVisiblity()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility, 0xa4>(this);
}
constexpr ::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility const& HoudiniEngineUnity::HEU_ToolsInfo::__get__paintMeshVisiblity() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::__HEU_ToolsInfo__PaintMeshVisibility, 0xa4>(this);
}
inline bool HoudiniEngineUnity::HEU_ToolsInfo::IsEquivalentTo(::HoudiniEngineUnity::HEU_ToolsInfo*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ToolsInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_ToolsInfo* HoudiniEngineUnity::HEU_ToolsInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_ToolsInfo*>());
}
inline void HoudiniEngineUnity::HEU_ToolsInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ToolsInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
