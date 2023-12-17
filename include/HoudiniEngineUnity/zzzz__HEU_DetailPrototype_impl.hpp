#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailPrototype._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_DetailPrototype::*)()>(&::HoudiniEngineUnity::HEU_DetailPrototype::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x21ea814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailPrototype.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_DetailPrototype::*)(::HoudiniEngineUnity::HEU_DetailPrototype*)>(&::HoudiniEngineUnity::HEU_DetailPrototype::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21ea910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailPrototype*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>"
constexpr  HoudiniEngineUnity::HEU_DetailPrototype::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*() noexcept {
return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailPrototype*>*>(static_cast<void*>(this));
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__prototypePrefab(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_DetailPrototype::__get__prototypePrefab()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_DetailPrototype::__get__prototypePrefab() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__prototypeTexture(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_DetailPrototype::__get__prototypeTexture()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_DetailPrototype::__get__prototypeTexture() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__bendFactor(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__bendFactor()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__bendFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__dryColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x24>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_DetailPrototype::__get__dryColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x24>(this);
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_DetailPrototype::__get__dryColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x24>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__healthyColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x34>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& HoudiniEngineUnity::HEU_DetailPrototype::__get__healthyColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x34>(this);
}
constexpr ::UnityEngine::Color const& HoudiniEngineUnity::HEU_DetailPrototype::__get__healthyColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x34>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__maxHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__maxHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__maxHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__maxWidth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__maxWidth()  {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__maxWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__minHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__minHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__minHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__minWidth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__minWidth()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__minWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__noiseSpread(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__noiseSpread()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__noiseSpread() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr void HoudiniEngineUnity::HEU_DetailPrototype::__set__renderMode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_DetailPrototype::__get__renderMode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_DetailPrototype::__get__renderMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
inline ::HoudiniEngineUnity::HEU_DetailPrototype* HoudiniEngineUnity::HEU_DetailPrototype::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_DetailPrototype*>());
}
inline void HoudiniEngineUnity::HEU_DetailPrototype::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_DetailPrototype::IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailPrototype*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailPrototype*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
