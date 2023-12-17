#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DateConditionalSpriteSwitcher_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__ConditionalSpriteSwitcher_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DateConditionalSpriteSwitcher.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DateConditionalSpriteSwitcher::*)()>(&::GlobalNamespace::DateConditionalSpriteSwitcher::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x226c250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DateConditionalSpriteSwitcher*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DateConditionalSpriteSwitcher._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DateConditionalSpriteSwitcher::*)()>(&::GlobalNamespace::DateConditionalSpriteSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DateConditionalSpriteSwitcher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__day(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::DateConditionalSpriteSwitcher::__get__day()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::DateConditionalSpriteSwitcher::__get__day() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__month(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::DateConditionalSpriteSwitcher::__get__month()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::DateConditionalSpriteSwitcher::__get__month() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__falseSprite(::UnityEngine::Sprite*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite*, 0x20>(this, std::forward<::UnityEngine::Sprite*>(value));
}
constexpr ::UnityEngine::Sprite* GlobalNamespace::DateConditionalSpriteSwitcher::__get__falseSprite()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> GlobalNamespace::DateConditionalSpriteSwitcher::__get__falseSprite() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x20>(this);
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__trueSprite(::UnityEngine::Sprite*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite*, 0x28>(this, std::forward<::UnityEngine::Sprite*>(value));
}
constexpr ::UnityEngine::Sprite* GlobalNamespace::DateConditionalSpriteSwitcher::__get__trueSprite()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> GlobalNamespace::DateConditionalSpriteSwitcher::__get__trueSprite() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x28>(this);
}
constexpr void GlobalNamespace::DateConditionalSpriteSwitcher::__set__conditionalSpriteSwitcher(::GlobalNamespace::ConditionalSpriteSwitcher*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ConditionalSpriteSwitcher*, 0x30>(this, std::forward<::GlobalNamespace::ConditionalSpriteSwitcher*>(value));
}
constexpr ::GlobalNamespace::ConditionalSpriteSwitcher* GlobalNamespace::DateConditionalSpriteSwitcher::__get__conditionalSpriteSwitcher()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConditionalSpriteSwitcher*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConditionalSpriteSwitcher*> GlobalNamespace::DateConditionalSpriteSwitcher::__get__conditionalSpriteSwitcher() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ConditionalSpriteSwitcher*, 0x30>(this);
}
inline void GlobalNamespace::DateConditionalSpriteSwitcher::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DateConditionalSpriteSwitcher*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DateConditionalSpriteSwitcher* GlobalNamespace::DateConditionalSpriteSwitcher::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DateConditionalSpriteSwitcher*>());
}
inline void GlobalNamespace::DateConditionalSpriteSwitcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DateConditionalSpriteSwitcher*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
