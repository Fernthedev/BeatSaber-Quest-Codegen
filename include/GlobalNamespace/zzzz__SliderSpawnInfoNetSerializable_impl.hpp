#pragma once
#include "GlobalNamespace/zzzz__PoolableSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Obtain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderSpawnInfoNetSerializable* (*)()>(&::GlobalNamespace::SliderSpawnInfoNetSerializable::Obtain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x12a9014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderSpawnInfoNetSerializable* (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::GlobalNamespace::ColorType, ::GlobalNamespace::__SliderData__Type, bool, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, float_t, bool, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, float_t, ::GlobalNamespace::SliderMidAnchorMode, int32_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::SliderSpawnInfoNetSerializable::Init)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x12a9078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderData__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)()>(&::GlobalNamespace::SliderSpawnInfoNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12a92bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::SliderSpawnInfoNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x12a9314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderSpawnInfoNetSerializable.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderSpawnInfoNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::SliderSpawnInfoNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x12a954c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_colorType(::GlobalNamespace::ColorType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorType, 0x14>(this, std::forward<::GlobalNamespace::ColorType>(value));
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_colorType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorType, 0x14>(this);
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_colorType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorType, 0x14>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_sliderType(::GlobalNamespace::__SliderData__Type  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SliderData__Type, 0x18>(this, std::forward<::GlobalNamespace::__SliderData__Type>(value));
}
constexpr ::GlobalNamespace::__SliderData__Type& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_sliderType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SliderData__Type, 0x18>(this);
}
constexpr ::GlobalNamespace::__SliderData__Type const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_sliderType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SliderData__Type, 0x18>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_hasHeadNote(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_hasHeadNote()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_hasHeadNote() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headLineIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headLineIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headLineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headLineLayer(::GlobalNamespace::NoteLineLayer  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineLayer, 0x28>(this, std::forward<::GlobalNamespace::NoteLineLayer>(value));
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headLineLayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x28>(this);
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headLineLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x28>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineLayer, 0x2c>(this, std::forward<::GlobalNamespace::NoteLineLayer>(value));
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headBeforeJumpLineLayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x2c>(this);
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headBeforeJumpLineLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x2c>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headControlPointLengthMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headControlPointLengthMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headControlPointLengthMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headCutDirection(::GlobalNamespace::NoteCutDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutDirection, 0x34>(this, std::forward<::GlobalNamespace::NoteCutDirection>(value));
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headCutDirection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x34>(this);
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headCutDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x34>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headCutDirectionAngleOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headCutDirectionAngleOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headCutDirectionAngleOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_hasTailNote(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_hasTailNote()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_hasTailNote() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailLineIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailLineIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailLineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailLineLayer(::GlobalNamespace::NoteLineLayer  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineLayer, 0x48>(this, std::forward<::GlobalNamespace::NoteLineLayer>(value));
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailLineLayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x48>(this);
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailLineLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x48>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineLayer, 0x4c>(this, std::forward<::GlobalNamespace::NoteLineLayer>(value));
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailBeforeJumpLineLayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x4c>(this);
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailBeforeJumpLineLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x4c>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailControlPointLengthMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailControlPointLengthMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailControlPointLengthMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailCutDirection(::GlobalNamespace::NoteCutDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutDirection, 0x54>(this, std::forward<::GlobalNamespace::NoteCutDirection>(value));
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailCutDirection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x54>(this);
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailCutDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x54>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailCutDirectionAngleOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailCutDirectionAngleOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailCutDirectionAngleOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_midAnchorMode(::GlobalNamespace::SliderMidAnchorMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x5c>(this, std::forward<::GlobalNamespace::SliderMidAnchorMode>(value));
}
constexpr ::GlobalNamespace::SliderMidAnchorMode& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_midAnchorMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x5c>(this);
}
constexpr ::GlobalNamespace::SliderMidAnchorMode const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_midAnchorMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x5c>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_sliceCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_sliceCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_sliceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_squishAmount(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_squishAmount()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_squishAmount() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headMoveStartPos(::GlobalNamespace::Vector3Serializable  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3Serializable, 0x68>(this, std::forward<::GlobalNamespace::Vector3Serializable>(value));
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headMoveStartPos()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x68>(this);
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headMoveStartPos() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x68>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headJumpStartPos(::GlobalNamespace::Vector3Serializable  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3Serializable, 0x74>(this, std::forward<::GlobalNamespace::Vector3Serializable>(value));
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headJumpStartPos()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x74>(this);
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headJumpStartPos() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x74>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headJumpEndPos(::GlobalNamespace::Vector3Serializable  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3Serializable, 0x80>(this, std::forward<::GlobalNamespace::Vector3Serializable>(value));
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headJumpEndPos()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x80>(this);
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headJumpEndPos() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x80>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_headJumpGravity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headJumpGravity()  {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_headJumpGravity() const {
return ::cordl_internals::getInstanceField<float_t, 0x8c>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailMoveStartPos(::GlobalNamespace::Vector3Serializable  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3Serializable, 0x90>(this, std::forward<::GlobalNamespace::Vector3Serializable>(value));
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailMoveStartPos()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x90>(this);
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailMoveStartPos() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x90>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailJumpStartPos(::GlobalNamespace::Vector3Serializable  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3Serializable, 0x9c>(this, std::forward<::GlobalNamespace::Vector3Serializable>(value));
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailJumpStartPos()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x9c>(this);
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailJumpStartPos() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0x9c>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailJumpEndPos(::GlobalNamespace::Vector3Serializable  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Vector3Serializable, 0xa8>(this, std::forward<::GlobalNamespace::Vector3Serializable>(value));
}
constexpr ::GlobalNamespace::Vector3Serializable& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailJumpEndPos()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0xa8>(this);
}
constexpr ::GlobalNamespace::Vector3Serializable const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailJumpEndPos() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Vector3Serializable, 0xa8>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_tailJumpGravity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb4>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailJumpGravity()  {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_tailJumpGravity() const {
return ::cordl_internals::getInstanceField<float_t, 0xb4>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_moveDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xb8>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_moveDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_moveDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0xb8>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_jumpDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xbc>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_jumpDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_jumpDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0xbc>(this);
}
constexpr void GlobalNamespace::SliderSpawnInfoNetSerializable::__set_rotation(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xc0>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_rotation()  {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
constexpr float_t const& GlobalNamespace::SliderSpawnInfoNetSerializable::__get_rotation() const {
return ::cordl_internals::getInstanceField<float_t, 0xc0>(this);
}
inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* GlobalNamespace::SliderSpawnInfoNetSerializable::Obtain()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                            "Obtain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderSpawnInfoNetSerializable*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* GlobalNamespace::SliderSpawnInfoNetSerializable::Init(::GlobalNamespace::ColorType  colorType, ::GlobalNamespace::__SliderData__Type  sliderType, bool  hasHeadNote, float_t  headTime, int32_t  headLineIndex, ::GlobalNamespace::NoteLineLayer  headLineLayer, ::GlobalNamespace::NoteLineLayer  headBeforeJumpLineLayer, float_t  headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  headCutDirectionAngleOffset, bool  hasTailNote, float_t  tailTime, int32_t  tailLineIndex, ::GlobalNamespace::NoteLineLayer  tailLineLayer, ::GlobalNamespace::NoteLineLayer  tailBeforeJumpLineLayer, float_t  tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  tailCutDirection, float_t  tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode  midAnchorMode, int32_t  sliceCount, float_t  squishAmount, ::UnityEngine::Vector3  headMoveStartPos, ::UnityEngine::Vector3  headJumpStartPos, ::UnityEngine::Vector3  headJumpEndPos, float_t  headJumpGravity, ::UnityEngine::Vector3  tailMoveStartPos, ::UnityEngine::Vector3  tailJumpStartPos, ::UnityEngine::Vector3  tailJumpEndPos, float_t  tailJumpGravity, float_t  moveDuration, float_t  jumpDuration, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SliderData__Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderSpawnInfoNetSerializable*, false>(*this, ___internal_method, colorType, sliderType, hasHeadNote, headTime, headLineIndex, headLineLayer, headBeforeJumpLineLayer, headControlPointLengthMultiplier, headCutDirection, headCutDirectionAngleOffset, hasTailNote, tailTime, tailLineIndex, tailLineLayer, tailBeforeJumpLineLayer, tailControlPointLengthMultiplier, tailCutDirection, tailCutDirectionAngleOffset, midAnchorMode, sliceCount, squishAmount, headMoveStartPos, headJumpStartPos, headJumpEndPos, headJumpGravity, tailMoveStartPos, tailJumpStartPos, tailJumpEndPos, tailJumpGravity, moveDuration, jumpDuration, rotation);
}
inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* GlobalNamespace::SliderSpawnInfoNetSerializable::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderSpawnInfoNetSerializable*>());
}
inline void GlobalNamespace::SliderSpawnInfoNetSerializable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SliderSpawnInfoNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::SliderSpawnInfoNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
