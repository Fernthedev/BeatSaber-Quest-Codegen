#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
constexpr void GlobalNamespace::__LevelCompletionResults__LevelEndStateType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LevelCompletionResults__LevelEndStateType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__LevelCompletionResults__LevelEndStateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType::__LevelCompletionResults__LevelEndStateType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  GlobalNamespace::__LevelCompletionResults__LevelEndStateType::Incomplete{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  GlobalNamespace::__LevelCompletionResults__LevelEndStateType::Cleared{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  GlobalNamespace::__LevelCompletionResults__LevelEndStateType::Failed{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__LevelCompletionResults__LevelEndAction::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LevelCompletionResults__LevelEndAction::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__LevelCompletionResults__LevelEndAction::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction::__LevelCompletionResults__LevelEndAction(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  GlobalNamespace::__LevelCompletionResults__LevelEndAction::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  GlobalNamespace::__LevelCompletionResults__LevelEndAction::Quit{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  GlobalNamespace::__LevelCompletionResults__LevelEndAction::Restart{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)()>(&::GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a2c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)(::GlobalNamespace::GameplayModifiers*, int32_t, int32_t, ::GlobalNamespace::__RankModel__Rank, bool, float_t, float_t, float_t, float_t, ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction, float_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, float_t, float_t, int32_t, float_t)>(&::GlobalNamespace::LevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x12a2c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RankModel__Rank>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::LevelCompletionResults::*)(::System::Object*)>(&::GlobalNamespace::LevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x12a2db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.Serialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::LevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x12a2ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::LevelCompletionResults::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12a30b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelCompletionResults.CreateFromSerializedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::LevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x12a30c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>"
constexpr  GlobalNamespace::LevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*() noexcept {
return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  GlobalNamespace::LevelCompletionResults::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_gameplayModifiers(::GlobalNamespace::GameplayModifiers*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiers*, 0x10>(this, std::forward<::GlobalNamespace::GameplayModifiers*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiers* GlobalNamespace::LevelCompletionResults::__get_gameplayModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> GlobalNamespace::LevelCompletionResults::__get_gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiers*, 0x10>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_modifiedScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_modifiedScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_modifiedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_multipliedScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_multipliedScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_multipliedScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rank(::GlobalNamespace::__RankModel__Rank  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RankModel__Rank, 0x20>(this, std::forward<::GlobalNamespace::__RankModel__Rank>(value));
}
constexpr ::GlobalNamespace::__RankModel__Rank& GlobalNamespace::LevelCompletionResults::__get_rank()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RankModel__Rank, 0x20>(this);
}
constexpr ::GlobalNamespace::__RankModel__Rank const& GlobalNamespace::LevelCompletionResults::__get_rank() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RankModel__Rank, 0x20>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_fullCombo(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LevelCompletionResults::__get_fullCombo()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& GlobalNamespace::LevelCompletionResults::__get_fullCombo() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_leftSaberMovementDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_leftSaberMovementDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_leftSaberMovementDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rightSaberMovementDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_rightSaberMovementDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_rightSaberMovementDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_leftHandMovementDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_leftHandMovementDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_leftHandMovementDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_rightHandMovementDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_rightHandMovementDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_rightHandMovementDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_levelEndStateType(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, 0x38>(this, std::forward<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>(value));
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType& GlobalNamespace::LevelCompletionResults::__get_levelEndStateType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, 0x38>(this);
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const& GlobalNamespace::LevelCompletionResults::__get_levelEndStateType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, 0x38>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_levelEndAction(::GlobalNamespace::__LevelCompletionResults__LevelEndAction  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__LevelCompletionResults__LevelEndAction, 0x3c>(this, std::forward<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>(value));
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction& GlobalNamespace::LevelCompletionResults::__get_levelEndAction()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LevelCompletionResults__LevelEndAction, 0x3c>(this);
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndAction const& GlobalNamespace::LevelCompletionResults::__get_levelEndAction() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__LevelCompletionResults__LevelEndAction, 0x3c>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_energy(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_energy()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_energy() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_goodCutsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_goodCutsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_goodCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_badCutsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_badCutsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_badCutsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_missedCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_missedCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_missedCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_notGoodCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_notGoodCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_notGoodCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_okCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_okCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_okCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_maxCutScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_maxCutScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_maxCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_totalCutScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_totalCutScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_totalCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_goodCutsCountForNotesWithFullScoreScoringType(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_goodCutsCountForNotesWithFullScoreScoringType()  {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_goodCutsCountForNotesWithFullScoreScoringType() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_averageCutScoreForNotesWithFullScoreScoringType(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_averageCutScoreForNotesWithFullScoreScoringType()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_averageCutScoreForNotesWithFullScoreScoringType() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_maxCombo(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LevelCompletionResults::__get_maxCombo()  {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this);
}
constexpr int32_t const& GlobalNamespace::LevelCompletionResults::__get_maxCombo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this);
}
constexpr void GlobalNamespace::LevelCompletionResults::__set_endSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LevelCompletionResults::__get_endSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& GlobalNamespace::LevelCompletionResults::__get_endSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelCompletionResults*>());
}
inline void GlobalNamespace::LevelCompletionResults::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::New_ctor(::GlobalNamespace::GameplayModifiers*  gameplayModifiers, int32_t  modifiedScore, int32_t  multipliedScore, ::GlobalNamespace::__RankModel__Rank  rank, bool  fullCombo, float_t  leftSaberMovementDistance, float_t  rightSaberMovementDistance, float_t  leftHandMovementDistance, float_t  rightHandMovementDistance, ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  levelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  levelEndAction, float_t  energy, int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCount, int32_t  notGoodCount, int32_t  okCount, int32_t  maxCutScore, int32_t  totalCutScore, int32_t  goodCutsCountForNotesWithFullScoreScoringType, float_t  averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t  averageCutScoreForNotesWithFullScoreScoringType, int32_t  maxCombo, float_t  endSongTime)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelCompletionResults*>(gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, goodCutsCount, badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType, averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime));
}
inline void GlobalNamespace::LevelCompletionResults::_ctor(::GlobalNamespace::GameplayModifiers*  gameplayModifiers, int32_t  modifiedScore, int32_t  multipliedScore, ::GlobalNamespace::__RankModel__Rank  rank, bool  fullCombo, float_t  leftSaberMovementDistance, float_t  rightSaberMovementDistance, float_t  leftHandMovementDistance, float_t  rightHandMovementDistance, ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  levelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction  levelEndAction, float_t  energy, int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCount, int32_t  notGoodCount, int32_t  okCount, int32_t  maxCutScore, int32_t  totalCutScore, int32_t  goodCutsCountForNotesWithFullScoreScoringType, float_t  averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t  averageCutScoreForNotesWithFullScoreScoringType, int32_t  maxCombo, float_t  endSongTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RankModel__Rank>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, gameplayModifiers, modifiedScore, multipliedScore, rank, fullCombo, leftSaberMovementDistance, rightSaberMovementDistance, leftHandMovementDistance, rightHandMovementDistance, levelEndStateType, levelEndAction, energy, goodCutsCount, badCutsCount, missedCount, notGoodCount, okCount, maxCutScore, totalCutScore, goodCutsCountForNotesWithFullScoreScoringType, averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, averageCutScoreForNotesWithFullScoreScoringType, maxCombo, endSongTime);
}
inline int32_t GlobalNamespace::LevelCompletionResults::CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, obj);
}
inline void GlobalNamespace::LevelCompletionResults::Serialize(::LiteNetLib::Utils::NetDataWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            "Serialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, writer);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            "LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(*this, ___internal_method, reader);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::LevelCompletionResults::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelCompletionResults*>::get(),
                            "CreateFromSerializedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(nullptr, ___internal_method, reader);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
