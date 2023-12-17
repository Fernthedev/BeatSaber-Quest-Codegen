#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayer_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeLayer.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeLayer::*)(::HoudiniEngineUnity::HEU_VolumeLayer*)>(&::HoudiniEngineUnity::HEU_VolumeLayer::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x21e9dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeLayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeLayer::*)()>(&::HoudiniEngineUnity::HEU_VolumeLayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21ea12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>"
constexpr  HoudiniEngineUnity::HEU_VolumeLayer::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__layerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeLayer::__get__layerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeLayer::__get__layerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__part(::HoudiniEngineUnity::HEU_PartData*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_PartData*, 0x18>(this, std::forward<::HoudiniEngineUnity::HEU_PartData*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_PartData* HoudiniEngineUnity::HEU_VolumeLayer::__get__part()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_PartData*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_PartData*> HoudiniEngineUnity::HEU_VolumeLayer::__get__part() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_PartData*, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__strength(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_VolumeLayer::__get__strength()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_VolumeLayer::__get__strength() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__uiExpanded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeLayer::__get__uiExpanded()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeLayer::__get__uiExpanded() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__tile(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayer::__get__tile()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayer::__get__tile() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__xLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayer::__get__xLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayer::__get__xLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__yLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeLayer::__get__yLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeLayer::__get__yLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__hasLayerAttributes(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeLayer::__get__hasLayerAttributes()  {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeLayer::__get__hasLayerAttributes() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__terrainLayer(::UnityEngine::TerrainLayer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::TerrainLayer*, 0x38>(this, std::forward<::UnityEngine::TerrainLayer*>(value));
}
constexpr ::UnityEngine::TerrainLayer* HoudiniEngineUnity::HEU_VolumeLayer::__get__terrainLayer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::TerrainLayer*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainLayer*> HoudiniEngineUnity::HEU_VolumeLayer::__get__terrainLayer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TerrainLayer*, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__layerType(::HoudiniEngineUnity::HFLayerType  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HFLayerType, 0x40>(this, std::forward<::HoudiniEngineUnity::HFLayerType>(value));
}
constexpr ::HoudiniEngineUnity::HFLayerType& HoudiniEngineUnity::HEU_VolumeLayer::__get__layerType()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HFLayerType, 0x40>(this);
}
constexpr ::HoudiniEngineUnity::HFLayerType const& HoudiniEngineUnity::HEU_VolumeLayer::__get__layerType() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HFLayerType, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__detailPrototype(::HoudiniEngineUnity::HEU_DetailPrototype*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_DetailPrototype*, 0x48>(this, std::forward<::HoudiniEngineUnity::HEU_DetailPrototype*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_DetailPrototype* HoudiniEngineUnity::HEU_VolumeLayer::__get__detailPrototype()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_DetailPrototype*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_DetailPrototype*> HoudiniEngineUnity::HEU_VolumeLayer::__get__detailPrototype() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_DetailPrototype*, 0x48>(this);
}
inline bool HoudiniEngineUnity::HEU_VolumeLayer::IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeLayer*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_VolumeLayer* HoudiniEngineUnity::HEU_VolumeLayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VolumeLayer*>());
}
inline void HoudiniEngineUnity::HEU_VolumeLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
