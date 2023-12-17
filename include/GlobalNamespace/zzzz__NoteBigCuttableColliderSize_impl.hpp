#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteBigCuttableColliderSize_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2386ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2386b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize.HandleNoteControllerDidInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)(::GlobalNamespace::NoteControllerBase*)>(&::GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2386c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                            "HandleNoteControllerDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteBigCuttableColliderSize._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteBigCuttableColliderSize::*)()>(&::GlobalNamespace::NoteBigCuttableColliderSize::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2386cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INoteControllerDidInitEvent"
constexpr  GlobalNamespace::NoteBigCuttableColliderSize::operator ::GlobalNamespace::INoteControllerDidInitEvent*() noexcept {
return static_cast<::GlobalNamespace::INoteControllerDidInitEvent*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__noteController(::GlobalNamespace::NoteController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteController*, 0x18>(this, std::forward<::GlobalNamespace::NoteController*>(value));
}
constexpr ::GlobalNamespace::NoteController* GlobalNamespace::NoteBigCuttableColliderSize::__get__noteController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteController*> GlobalNamespace::NoteBigCuttableColliderSize::__get__noteController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteController*, 0x18>(this);
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__boxCollider(::UnityEngine::BoxCollider*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::BoxCollider*, 0x20>(this, std::forward<::UnityEngine::BoxCollider*>(value));
}
constexpr ::UnityEngine::BoxCollider* GlobalNamespace::NoteBigCuttableColliderSize::__get__boxCollider()  {
return ::cordl_internals::getInstanceField<::UnityEngine::BoxCollider*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> GlobalNamespace::NoteBigCuttableColliderSize::__get__boxCollider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::BoxCollider*, 0x20>(this);
}
constexpr void GlobalNamespace::NoteBigCuttableColliderSize::__set__defaultColliderSize(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::NoteBigCuttableColliderSize::__get__defaultColliderSize()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::NoteBigCuttableColliderSize::__get__defaultColliderSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase*  noteController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                            "HandleNoteControllerDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, noteController);
}
inline ::GlobalNamespace::NoteBigCuttableColliderSize* GlobalNamespace::NoteBigCuttableColliderSize::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteBigCuttableColliderSize*>());
}
inline void GlobalNamespace::NoteBigCuttableColliderSize::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteBigCuttableColliderSize*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
