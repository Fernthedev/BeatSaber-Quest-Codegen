#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolumeLayer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21abd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__layerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__partID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__partID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__partID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__heightMapWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightMapWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightMapWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__heightMapHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightMapHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightMapHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__strength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__strength()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__strength() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__diffuseTexturePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__diffuseTexturePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__diffuseTexturePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__maskTexturePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maskTexturePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maskTexturePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__metallic(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__metallic()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__metallic() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__normalTexturePath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalTexturePath()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalTexturePath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__normalScale(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalScale()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__smoothness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__smoothness()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__smoothness() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__specularColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x50>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__specularColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x50>(this);
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__specularColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x50>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__tileSize(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x60>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tileSize()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x60>(this);
}
constexpr ::UnityEngine::Vector2 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tileSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x60>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__tileOffset(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x68>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tileOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x68>(this);
}
constexpr ::UnityEngine::Vector2 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tileOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x68>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__uiExpanded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__uiExpanded()  {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__uiExpanded() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__tile(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tile()  {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__tile() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__normalizedHeights(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x78>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalizedHeights()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x78>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__normalizedHeights() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x78>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__minHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__minHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__minHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__maxHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maxHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maxHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__heightRange(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightRange()  {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__heightRange() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__terrainSizeX(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__terrainSizeX()  {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__terrainSizeX() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__terrainSizeY(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__terrainSizeY()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__terrainSizeY() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x94>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x94>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x94>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__minBounds(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xa0>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__minBounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xa0>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__minBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xa0>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__maxBounds(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xac>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maxBounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xac>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__maxBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xac>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__center(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xb8>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__center()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xb8>(this);
}
constexpr ::UnityEngine::Vector3 const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__center() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xb8>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__layerPath(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xc8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerPath()  {
return ::cordl_internals::getInstanceField<::StringW, 0xc8>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc8>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__hasLayerAttributes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__hasLayerAttributes()  {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__hasLayerAttributes() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this);
}
constexpr void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__set__layerType(::HoudiniEngineUnity::HFLayerType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HFLayerType, 0xd4>(this, std::forward<::HoudiniEngineUnity::HFLayerType>(value));
}
constexpr ::HoudiniEngineUnity::HFLayerType& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HFLayerType, 0xd4>(this);
}
constexpr ::HoudiniEngineUnity::HFLayerType const& HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::__get__layerType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HFLayerType, 0xd4>(this);
}
inline ::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer* HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>());
}
inline void HoudiniEngineUnity::HEU_LoadBufferVolumeLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
