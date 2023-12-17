#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__NoteExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__NoteExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
constexpr void GlobalNamespace::__NoteExecutionRating__Rating::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__NoteExecutionRating__Rating::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__NoteExecutionRating__Rating::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NoteExecutionRating__Rating::__NoteExecutionRating__Rating(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__NoteExecutionRating__Rating  GlobalNamespace::__NoteExecutionRating__Rating::GoodCut{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__NoteExecutionRating__Rating  GlobalNamespace::__NoteExecutionRating__Rating::Miss{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__NoteExecutionRating__Rating  GlobalNamespace::__NoteExecutionRating__Rating::BadCut{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::NoteExecutionRating._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteExecutionRating::*)(float_t, ::GlobalNamespace::__NoteData__ScoringType, ::GlobalNamespace::__NoteExecutionRating__Rating, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::NoteExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2364644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteExecutionRating*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteExecutionRating__Rating>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteExecutionRating::__set_rating(::GlobalNamespace::__NoteExecutionRating__Rating  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__NoteExecutionRating__Rating, 0x14>(this, std::forward<::GlobalNamespace::__NoteExecutionRating__Rating>(value));
}
constexpr ::GlobalNamespace::__NoteExecutionRating__Rating& GlobalNamespace::NoteExecutionRating::__get_rating()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteExecutionRating__Rating, 0x14>(this);
}
constexpr ::GlobalNamespace::__NoteExecutionRating__Rating const& GlobalNamespace::NoteExecutionRating::__get_rating() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteExecutionRating__Rating, 0x14>(this);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_cutScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NoteExecutionRating::__get_cutScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::NoteExecutionRating::__get_cutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_beforeCutScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NoteExecutionRating::__get_beforeCutScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::NoteExecutionRating::__get_beforeCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_centerDistanceCutScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NoteExecutionRating::__get_centerDistanceCutScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::NoteExecutionRating::__get_centerDistanceCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_afterCutScore(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NoteExecutionRating::__get_afterCutScore()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& GlobalNamespace::NoteExecutionRating::__get_afterCutScore() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void GlobalNamespace::NoteExecutionRating::__set_scoringType(::GlobalNamespace::__NoteData__ScoringType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__NoteData__ScoringType, 0x28>(this, std::forward<::GlobalNamespace::__NoteData__ScoringType>(value));
}
constexpr ::GlobalNamespace::__NoteData__ScoringType& GlobalNamespace::NoteExecutionRating::__get_scoringType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteData__ScoringType, 0x28>(this);
}
constexpr ::GlobalNamespace::__NoteData__ScoringType const& GlobalNamespace::NoteExecutionRating::__get_scoringType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__NoteData__ScoringType, 0x28>(this);
}
inline ::GlobalNamespace::NoteExecutionRating* GlobalNamespace::NoteExecutionRating::New_ctor(float_t  time, ::GlobalNamespace::__NoteData__ScoringType  scoringType, ::GlobalNamespace::__NoteExecutionRating__Rating  rating, int32_t  cutScore, int32_t  beforeCutScore, int32_t  centerDistanceCutScore, int32_t  afterCutScore)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteExecutionRating*>(time, scoringType, rating, cutScore, beforeCutScore, centerDistanceCutScore, afterCutScore));
}
inline void GlobalNamespace::NoteExecutionRating::_ctor(float_t  time, ::GlobalNamespace::__NoteData__ScoringType  scoringType, ::GlobalNamespace::__NoteExecutionRating__Rating  rating, int32_t  cutScore, int32_t  beforeCutScore, int32_t  centerDistanceCutScore, int32_t  afterCutScore)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteExecutionRating*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__ScoringType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteExecutionRating__Rating>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, scoringType, rating, cutScore, beforeCutScore, centerDistanceCutScore, afterCutScore);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
