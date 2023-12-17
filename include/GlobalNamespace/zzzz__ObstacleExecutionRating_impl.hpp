#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleExecutionRating_def.hpp"
constexpr void GlobalNamespace::__ObstacleExecutionRating__Rating::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ObstacleExecutionRating__Rating::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ObstacleExecutionRating__Rating::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating::__ObstacleExecutionRating__Rating(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating  GlobalNamespace::__ObstacleExecutionRating__Rating::OK{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating  GlobalNamespace::__ObstacleExecutionRating__Rating::NotGood{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::ObstacleExecutionRating.get_rating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ObstacleExecutionRating__Rating (::GlobalNamespace::ObstacleExecutionRating::*)()>(&::GlobalNamespace::ObstacleExecutionRating::get_rating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleExecutionRating*>::get(),
                            "get_rating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleExecutionRating._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleExecutionRating::*)(float_t, ::GlobalNamespace::__ObstacleExecutionRating__Rating)>(&::GlobalNamespace::ObstacleExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23646a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleExecutionRating*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleExecutionRating__Rating>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ObstacleExecutionRating::__set__rating_k__BackingField(::GlobalNamespace::__ObstacleExecutionRating__Rating  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ObstacleExecutionRating__Rating, 0x14>(this, std::forward<::GlobalNamespace::__ObstacleExecutionRating__Rating>(value));
}
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating& GlobalNamespace::ObstacleExecutionRating::__get__rating_k__BackingField()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObstacleExecutionRating__Rating, 0x14>(this);
}
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating const& GlobalNamespace::ObstacleExecutionRating::__get__rating_k__BackingField() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ObstacleExecutionRating__Rating, 0x14>(this);
}
inline ::GlobalNamespace::__ObstacleExecutionRating__Rating GlobalNamespace::ObstacleExecutionRating::get_rating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleExecutionRating*>::get(),
                            "get_rating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ObstacleExecutionRating__Rating, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleExecutionRating* GlobalNamespace::ObstacleExecutionRating::New_ctor(float_t  time, ::GlobalNamespace::__ObstacleExecutionRating__Rating  rating)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ObstacleExecutionRating*>(time, rating));
}
inline void GlobalNamespace::ObstacleExecutionRating::_ctor(float_t  time, ::GlobalNamespace::__ObstacleExecutionRating__Rating  rating)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleExecutionRating*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleExecutionRating__Rating>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, rating);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
