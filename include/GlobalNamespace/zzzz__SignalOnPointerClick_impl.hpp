#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SignalOnPointerClick_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SignalOnPointerClick.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalOnPointerClick::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::SignalOnPointerClick::OnPointerClick)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x20f590c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnPointerClick*>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SignalOnPointerClick._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SignalOnPointerClick::*)()>(&::GlobalNamespace::SignalOnPointerClick::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f592c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnPointerClick*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr  GlobalNamespace::SignalOnPointerClick::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  GlobalNamespace::SignalOnPointerClick::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::SignalOnPointerClick::__set__inputFieldClickedSignal(::GlobalNamespace::Signal*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Signal*, 0x18>(this, std::forward<::GlobalNamespace::Signal*>(value));
}
constexpr ::GlobalNamespace::Signal* GlobalNamespace::SignalOnPointerClick::__get__inputFieldClickedSignal()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Signal*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> GlobalNamespace::SignalOnPointerClick::__get__inputFieldClickedSignal() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Signal*, 0x18>(this);
}
inline void GlobalNamespace::SignalOnPointerClick::OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnPointerClick*>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline ::GlobalNamespace::SignalOnPointerClick* GlobalNamespace::SignalOnPointerClick::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SignalOnPointerClick*>());
}
inline void GlobalNamespace::SignalOnPointerClick::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SignalOnPointerClick*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
