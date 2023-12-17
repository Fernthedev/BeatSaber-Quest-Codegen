#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/zzzz__Baker_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "RootMotion/zzzz__Baker_def.hpp"
constexpr void RootMotion::__Baker__Mode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::__Baker__Mode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& RootMotion::__Baker__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::__Baker__Mode::__Baker__Mode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::RootMotion::__Baker__Mode  RootMotion::__Baker__Mode::AnimationClips{static_cast<int32_t>(0x0)};
constexpr ::RootMotion::__Baker__Mode  RootMotion::__Baker__Mode::AnimationStates{static_cast<int32_t>(0x1)};
constexpr ::RootMotion::__Baker__Mode  RootMotion::__Baker__Mode::PlayableDirector{static_cast<int32_t>(0x2)};
constexpr ::RootMotion::__Baker__Mode  RootMotion::__Baker__Mode::Realtime{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::RootMotion::Baker.OpenUserManual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1230bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OpenScriptReference
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1230c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.SupportGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1230c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.ASThread
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1230ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.get_isBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::Baker::*)()>(&::RootMotion::Baker::get_isBaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "get_isBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.set_isBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(bool)>(&::RootMotion::Baker::set_isBaking)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1230cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "set_isBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.get_bakingProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::Baker::*)()>(&::RootMotion::Baker::get_bakingProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "get_bakingProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.set_bakingProgress
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(float_t)>(&::RootMotion::Baker::set_bakingProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "set_bakingProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.GetCharacterRoot
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::RootMotion::Baker::*)()>(&::RootMotion::Baker::GetCharacterRoot)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OnStartBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::OnStartBaking)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OnSetLoopFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(float_t)>(&::RootMotion::Baker::OnSetLoopFrame)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OnSetCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(ByRef<::UnityEngine::AnimationClip*>)>(&::RootMotion::Baker::OnSetCurves)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.OnSetKeyframes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(float_t, bool)>(&::RootMotion::Baker::OnSetKeyframes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.get_clipLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::Baker::*)()>(&::RootMotion::Baker::get_clipLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "get_clipLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.set_clipLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)(float_t)>(&::RootMotion::Baker::set_clipLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1230d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "set_clipLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.BakeClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::BakeClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1230d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "BakeClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.StartBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::StartBaking)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1230d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "StartBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker.StopBaking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::StopBaking)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1230d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "StopBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::Baker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::Baker::*)()>(&::RootMotion::Baker::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1230d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void RootMotion::Baker::__set_frameRate(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& RootMotion::Baker::__get_frameRate()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& RootMotion::Baker::__get_frameRate() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void RootMotion::Baker::__set_keyReductionError(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::Baker::__get_keyReductionError()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& RootMotion::Baker::__get_keyReductionError() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void RootMotion::Baker::__set_mode(::RootMotion::__Baker__Mode  value)  {
::cordl_internals::setInstanceField<::RootMotion::__Baker__Mode, 0x20>(this, std::forward<::RootMotion::__Baker__Mode>(value));
}
constexpr ::RootMotion::__Baker__Mode& RootMotion::Baker::__get_mode()  {
return ::cordl_internals::getInstanceField<::RootMotion::__Baker__Mode, 0x20>(this);
}
constexpr ::RootMotion::__Baker__Mode const& RootMotion::Baker::__get_mode() const {
return ::cordl_internals::getInstanceField<::RootMotion::__Baker__Mode, 0x20>(this);
}
constexpr void RootMotion::Baker::__set_animationClips(::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>, 0x28>(this, std::forward<::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>& RootMotion::Baker::__get_animationClips()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>, 0x28>(this);
}
constexpr ::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*> const& RootMotion::Baker::__get_animationClips() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>, 0x28>(this);
}
constexpr void RootMotion::Baker::__set_animationStates(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& RootMotion::Baker::__get_animationStates()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& RootMotion::Baker::__get_animationStates() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this);
}
constexpr void RootMotion::Baker::__set_loop(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::Baker::__get_loop()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& RootMotion::Baker::__get_loop() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void RootMotion::Baker::__set_saveToFolder(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& RootMotion::Baker::__get_saveToFolder()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& RootMotion::Baker::__get_saveToFolder() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void RootMotion::Baker::__set_appendName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& RootMotion::Baker::__get_appendName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& RootMotion::Baker::__get_appendName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void RootMotion::Baker::__set_saveName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& RootMotion::Baker::__get_saveName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& RootMotion::Baker::__get_saveName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void RootMotion::Baker::__set__isBaking_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& RootMotion::Baker::__get__isBaking_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& RootMotion::Baker::__get__isBaking_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void RootMotion::Baker::__set__bakingProgress_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::Baker::__get__bakingProgress_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& RootMotion::Baker::__get__bakingProgress_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void RootMotion::Baker::__set_animator(::UnityEngine::Animator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator*, 0x60>(this, std::forward<::UnityEngine::Animator*>(value));
}
constexpr ::UnityEngine::Animator* RootMotion::Baker::__get_animator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> RootMotion::Baker::__get_animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x60>(this);
}
constexpr void RootMotion::Baker::__set_director(::UnityEngine::Playables::PlayableDirector*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x68>(this, std::forward<::UnityEngine::Playables::PlayableDirector*>(value));
}
constexpr ::UnityEngine::Playables::PlayableDirector* RootMotion::Baker::__get_director()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> RootMotion::Baker::__get_director() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x68>(this);
}
constexpr void RootMotion::Baker::__set__clipLength_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& RootMotion::Baker::__get__clipLength_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& RootMotion::Baker::__get__clipLength_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
inline void RootMotion::Baker::OpenUserManual()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "OpenUserManual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::OpenScriptReference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "OpenScriptReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::SupportGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "SupportGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::ASThread()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "ASThread",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool RootMotion::Baker::get_isBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "get_isBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::set_isBaking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "set_isBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t RootMotion::Baker::get_bakingProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "get_bakingProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::set_bakingProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "set_bakingProgress",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Transform* RootMotion::Baker::GetCharacterRoot()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "GetCharacterRoot",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::OnStartBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "OnStartBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::OnSetLoopFrame(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "OnSetLoopFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time);
}
inline void RootMotion::Baker::OnSetCurves(ByRef<::UnityEngine::AnimationClip*>  clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "OnSetCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::AnimationClip*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clip);
}
inline void RootMotion::Baker::OnSetKeyframes(float_t  time, bool  lastFrame)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "OnSetKeyframes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, lastFrame);
}
inline float_t RootMotion::Baker::get_clipLength()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "get_clipLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::set_clipLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "set_clipLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void RootMotion::Baker::BakeClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "BakeClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::StartBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "StartBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void RootMotion::Baker::StopBaking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            "StopBaking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::RootMotion::Baker* RootMotion::Baker::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::Baker*>());
}
inline void RootMotion::Baker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::Baker*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
