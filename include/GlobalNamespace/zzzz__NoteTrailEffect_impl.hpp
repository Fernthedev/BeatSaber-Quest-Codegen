#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteTrailEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteTrailParticleSystem_def.hpp"
#include "GlobalNamespace/zzzz__NoteMovement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23ae960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x23aea60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::Update)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23aeb8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.HandleNoteMovementDidInit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::HandleNoteMovementDidInit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23aebf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "HandleNoteMovementDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect.HandleNoteDidStartJump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::HandleNoteDidStartJump)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23aebfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "HandleNoteDidStartJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteTrailEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteTrailEffect::*)()>(&::GlobalNamespace::NoteTrailEffect::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23aec08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteTrailEffect::__set__particlesPerFrame(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::NoteTrailEffect::__get__particlesPerFrame()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::NoteTrailEffect::__get__particlesPerFrame() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::NoteTrailEffect::__set__maxSpawnDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::NoteTrailEffect::__get__maxSpawnDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::NoteTrailEffect::__get__maxSpawnDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::NoteTrailEffect::__set__noteMovement(::GlobalNamespace::NoteMovement*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteMovement*, 0x20>(this, std::forward<::GlobalNamespace::NoteMovement*>(value));
}
constexpr ::GlobalNamespace::NoteMovement* GlobalNamespace::NoteTrailEffect::__get__noteMovement()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteMovement*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteMovement*> GlobalNamespace::NoteTrailEffect::__get__noteMovement() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteMovement*, 0x20>(this);
}
constexpr void GlobalNamespace::NoteTrailEffect::__set__noteTrailParticleSystem(::GlobalNamespace::NoteTrailParticleSystem*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteTrailParticleSystem*, 0x28>(this, std::forward<::GlobalNamespace::NoteTrailParticleSystem*>(value));
}
constexpr ::GlobalNamespace::NoteTrailParticleSystem* GlobalNamespace::NoteTrailEffect::__get__noteTrailParticleSystem()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteTrailParticleSystem*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteTrailParticleSystem*> GlobalNamespace::NoteTrailEffect::__get__noteTrailParticleSystem() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteTrailParticleSystem*, 0x28>(this);
}
inline void GlobalNamespace::NoteTrailEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::HandleNoteMovementDidInit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "HandleNoteMovementDidInit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::NoteTrailEffect::HandleNoteDidStartJump()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            "HandleNoteDidStartJump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteTrailEffect* GlobalNamespace::NoteTrailEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteTrailEffect*>());
}
inline void GlobalNamespace::NoteTrailEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteTrailEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
