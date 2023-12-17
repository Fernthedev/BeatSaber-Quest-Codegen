#pragma once
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisRigidbodyPhysics_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSimplePhysics_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)()>(&::GlobalNamespace::NoteDebrisRigidbodyPhysics::get_position)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23883f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)()>(&::GlobalNamespace::NoteDebrisRigidbodyPhysics::FixedUpdate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2388414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::NoteDebrisRigidbodyPhysics::Init)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x238845c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics.AddVelocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::NoteDebrisRigidbodyPhysics::AddVelocity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2388520;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisRigidbodyPhysics._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisRigidbodyPhysics::*)()>(&::GlobalNamespace::NoteDebrisRigidbodyPhysics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2388580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteDebrisRigidbodyPhysics::__set__rigidbody(::UnityEngine::Rigidbody*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rigidbody*, 0x18>(this, std::forward<::UnityEngine::Rigidbody*>(value));
}
constexpr ::UnityEngine::Rigidbody* GlobalNamespace::NoteDebrisRigidbodyPhysics::__get__rigidbody()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> GlobalNamespace::NoteDebrisRigidbodyPhysics::__get__rigidbody() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rigidbody*, 0x18>(this);
}
constexpr void GlobalNamespace::NoteDebrisRigidbodyPhysics::__set__simplePhysics(::GlobalNamespace::NoteDebrisSimplePhysics*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteDebrisSimplePhysics*, 0x20>(this, std::forward<::GlobalNamespace::NoteDebrisSimplePhysics*>(value));
}
constexpr ::GlobalNamespace::NoteDebrisSimplePhysics* GlobalNamespace::NoteDebrisRigidbodyPhysics::__get__simplePhysics()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteDebrisSimplePhysics*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteDebrisSimplePhysics*> GlobalNamespace::NoteDebrisRigidbodyPhysics::__get__simplePhysics() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteDebrisSimplePhysics*, 0x20>(this);
}
constexpr void GlobalNamespace::NoteDebrisRigidbodyPhysics::__set__firstUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::NoteDebrisRigidbodyPhysics::__get__firstUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::NoteDebrisRigidbodyPhysics::__get__firstUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline ::UnityEngine::Vector3 GlobalNamespace::NoteDebrisRigidbodyPhysics::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisRigidbodyPhysics::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisRigidbodyPhysics::Init(::UnityEngine::Vector3  force, ::UnityEngine::Vector3  torque)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, force, torque);
}
inline void GlobalNamespace::NoteDebrisRigidbodyPhysics::AddVelocity(::UnityEngine::Vector3  force)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                            "AddVelocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, force);
}
inline ::GlobalNamespace::NoteDebrisRigidbodyPhysics* GlobalNamespace::NoteDebrisRigidbodyPhysics::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>());
}
inline void GlobalNamespace::NoteDebrisRigidbodyPhysics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisRigidbodyPhysics*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
