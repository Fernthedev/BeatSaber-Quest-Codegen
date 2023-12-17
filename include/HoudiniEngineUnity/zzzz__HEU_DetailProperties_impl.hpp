#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailProperties_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailProperties.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_DetailProperties::*)(::HoudiniEngineUnity::HEU_DetailProperties*)>(&::HoudiniEngineUnity::HEU_DetailProperties::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x21ea60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailProperties._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_DetailProperties::*)()>(&::HoudiniEngineUnity::HEU_DetailProperties::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21ea7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>"
constexpr  HoudiniEngineUnity::HEU_DetailProperties::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_DetailProperties::__set__detailDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailProperties::__get__detailDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailProperties::__get__detailDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailProperties::__set__detailDensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailProperties::__get__detailDensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailProperties::__get__detailDensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailProperties::__set__detailResolution(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_DetailProperties::__get__detailResolution()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_DetailProperties::__get__detailResolution() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailProperties::__set__detailResolutionPerPatch(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_DetailProperties::__get__detailResolutionPerPatch()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_DetailProperties::__get__detailResolutionPerPatch() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
inline bool HoudiniEngineUnity::HEU_DetailProperties::IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailProperties*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_DetailProperties* HoudiniEngineUnity::HEU_DetailProperties::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_DetailProperties*>());
}
inline void HoudiniEngineUnity::HEU_DetailProperties::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
