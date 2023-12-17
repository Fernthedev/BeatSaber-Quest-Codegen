#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__AppliedOffsetMode_def.hpp"
#include "UnityEngine/Timeline/zzzz__MatchTargetFields_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackOffset_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__ILayerable_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationLayerMixerPlayable_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/zzzz__AvatarMask_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationPlayableAsset_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade.ConvertRotationsToEuler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade::ConvertRotationsToEuler)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c54d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade*>::get(),
                            "ConvertRotationsToEuler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationTrack*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade.ConvertRootMotion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade::ConvertRootMotion)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2c54de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade*>::get(),
                            "ConvertRootMotion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationTrack*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade.ConvertInfiniteTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::AnimationTrack*)>(&::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade::ConvertInfiniteTrack)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c54e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade*>::get(),
                            "ConvertInfiniteTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationTrack*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade::ConvertRotationsToEuler(::UnityEngine::Timeline::AnimationTrack*  track)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade*>::get(),
                            "ConvertRotationsToEuler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationTrack*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, track);
}
inline void UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade::ConvertRootMotion(::UnityEngine::Timeline::AnimationTrack*  track)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade*>::get(),
                            "ConvertRootMotion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationTrack*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, track);
}
inline void UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade::ConvertInfiniteTrack(::UnityEngine::Timeline::AnimationTrack*  track)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack__AnimationTrackUpgrade*>::get(),
                            "ConvertInfiniteTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationTrack*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, track);
}
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::*)(int32_t)>(&::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c51044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::*)()>(&::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c550a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::*)()>(&::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::MoveNext)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2c550a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49.System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableBinding (::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::*)()>(&::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c55138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::*)()>(&::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c55148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::*)()>(&::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c55188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49.System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::*)()>(&::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c551e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::*)()>(&::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5528c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr  UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr  UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__set___2__current(::UnityEngine::Playables::PlayableBinding  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableBinding, 0x18>(this, std::forward<::UnityEngine::Playables::PlayableBinding>(value));
}
constexpr ::UnityEngine::Playables::PlayableBinding& UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__get___2__current()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableBinding, 0x18>(this);
}
constexpr ::UnityEngine::Playables::PlayableBinding const& UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableBinding, 0x18>(this);
}
constexpr void UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__set___4__this(::UnityEngine::Timeline::AnimationTrack*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::AnimationTrack*, 0x40>(this, std::forward<::UnityEngine::Timeline::AnimationTrack*>(value));
}
constexpr ::UnityEngine::Timeline::AnimationTrack* UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__get___4__this()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::AnimationTrack*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::AnimationTrack*> UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::AnimationTrack*, 0x40>(this);
}
inline ::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49* UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>(__1__state));
}
inline void UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableBinding UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__AnimationTrack___get_outputs_d__49*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c50da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationTrack::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c50db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_rotation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c50dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Timeline::AnimationTrack::set_rotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c50de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_eulerAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_eulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c50e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_eulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_eulerAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationTrack::set_eulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c50e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_eulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_applyOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_applyOffsets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50e34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_applyOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_applyOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(bool)>(&::UnityEngine::Timeline::AnimationTrack::set_applyOffsets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c50e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_applyOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_trackOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TrackOffset (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_trackOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_trackOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_trackOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TrackOffset)>(&::UnityEngine::Timeline::AnimationTrack::set_trackOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_trackOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackOffset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_matchTargetFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::MatchTargetFields (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_matchTargetFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_matchTargetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_matchTargetFields
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::MatchTargetFields)>(&::UnityEngine::Timeline::AnimationTrack::set_matchTargetFields)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c50e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_matchTargetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::MatchTargetFields>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationClip* (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipRemoveOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipRemoveOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipRemoveOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipRemoveOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(bool)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipRemoveOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c50ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipRemoveOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_avatarMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AvatarMask* (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_avatarMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_avatarMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_avatarMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::AvatarMask*)>(&::UnityEngine::Timeline::AnimationTrack::set_avatarMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_avatarMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarMask*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_applyAvatarMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_applyAvatarMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c50efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_applyAvatarMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_applyAvatarMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(bool)>(&::UnityEngine::Timeline::AnimationTrack::set_applyAvatarMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c50f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_applyAvatarMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CanCompileClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::CanCompileClips)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c50f10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_outputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_outputs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c50fcc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_inClipMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_inClipMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c51078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_inClipMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipOffsetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5115c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipOffsetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c51168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipOffsetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetRotation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c51174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipOffsetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetRotation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c51198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipOffsetEulerAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetEulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c511d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipOffsetEulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipOffsetEulerAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetEulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c511e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipOffsetEulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipApplyFootIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipApplyFootIK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c511ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipApplyFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipApplyFootIK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(bool)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipApplyFootIK)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c511f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipApplyFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c51200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipTimeOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(double_t)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c51208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipPreExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipPreExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c51210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipPreExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipPreExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c51218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipPostExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipPostExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c51220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipPostExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipPostExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c51228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_infiniteClipLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_infiniteClipLoop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c51230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_infiniteClipLoop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode)>(&::UnityEngine::Timeline::AnimationTrack::set_infiniteClipLoop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c51238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.ResetOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::ResetOffsets)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c51240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "ResetOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::AnimationTrack::CreateClip)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c512b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateInfiniteClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::StringW)>(&::UnityEngine::Timeline::AnimationTrack::CreateInfiniteClip)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c515ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateInfiniteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateRecordableClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::AnimationTrack::*)(::StringW)>(&::UnityEngine::Timeline::AnimationTrack::CreateRecordableClip)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2c516b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateRecordableClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.OnCreateClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::AnimationTrack::OnCreateClip)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c519a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CalculateItemsHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::CalculateItemsHash)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c51b68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.UpdateClipOffsets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::UpdateClipOffsets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c512ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "UpdateClipOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CompileTrackPlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationTrack::CompileTrackPlayable)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x2c51d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CompileTrackPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationTrack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.UnityEngine_Timeline_ILayerable_CreateLayerMixer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::Timeline::AnimationTrack::UnityEngine_Timeline_ILayerable_CreateLayerMixer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c5276c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "UnityEngine.Timeline.ILayerable.CreateLayerMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateMixerPlayableGraph
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*)>(&::UnityEngine::Timeline::AnimationTrack::CreateMixerPlayableGraph)> {
  constexpr static std::size_t size = 0x99c;
  constexpr static std::size_t addrs = 0x2c527bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetDefaultBlendCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::GetDefaultBlendCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5362c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetDefaultBlendCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.AttachDefaultBlend
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::AnimationLayerMixerPlayable, bool)>(&::UnityEngine::Timeline::AnimationTrack::AttachDefaultBlend)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c53b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "AttachDefaultBlend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationLayerMixerPlayable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.AttachOffsetPlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::UnityEngine::Timeline::AnimationTrack::AttachOffsetPlayable)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2c53b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "AttachOffsetPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.RequiresMotionXPlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::AppliedOffsetMode, ::UnityEngine::GameObject*)>(&::UnityEngine::Timeline::AnimationTrack::RequiresMotionXPlayable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2c53a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "RequiresMotionXPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.UsesAbsoluteMotion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationTrack::UsesAbsoluteMotion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c53b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "UsesAbsoluteMotion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.HasController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::GameObject*)>(&::UnityEngine::Timeline::AnimationTrack::HasController)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2c53e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "HasController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animator* (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableDirector*)>(&::UnityEngine::Timeline::AnimationTrack::GetBinding)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2c53ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateGroupMixer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::AnimationLayerMixerPlayable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::Timeline::AnimationTrack::CreateGroupMixer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c53634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateGroupMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.CreateInfiniteTrackPlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationTrack::CreateInfiniteTrackPlayable)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x2c536a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateInfiniteTrackPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.ApplyTrackOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AppliedOffsetMode)>(&::UnityEngine::Timeline::AnimationTrack::ApplyTrackOffset)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2c525b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "ApplyTrackOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetEvaluationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(ByRef<double_t>, ByRef<double_t>)>(&::UnityEngine::Timeline::AnimationTrack::GetEvaluationTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c53fd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetSequenceTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(ByRef<double_t>, ByRef<double_t>)>(&::UnityEngine::Timeline::AnimationTrack::GetSequenceTime)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2c542cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.AssignAnimationClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::AnimationTrack::AssignAnimationClip)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2c51358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "AssignAnimationClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GatherProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&::UnityEngine::Timeline::AnimationTrack::GatherProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5453c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetAnimationClips
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>*)>(&::UnityEngine::Timeline::AnimationTrack::GetAnimationClips)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x2c54540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetAnimationClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetOffsetMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::AppliedOffsetMode (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::GameObject*, bool)>(&::UnityEngine::Timeline::AnimationTrack::GetOffsetMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c535bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetOffsetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.IsRootTransformDisabledByMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*)>(&::UnityEngine::Timeline::AnimationTrack::IsRootTransformDisabledByMask)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x2c53340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "IsRootTransformDisabledByMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.GetGenericRootNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::GameObject*)>(&::UnityEngine::Timeline::AnimationTrack::GetGenericRootNode)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2c53158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetGenericRootNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.AnimatesRootTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::AnimatesRootTransform)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2c521d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "AnimatesRootTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.FindInHierarchyBreadthFirst
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::UnityEngine::Transform*, ::StringW)>(&::UnityEngine::Timeline::AnimationTrack::FindInHierarchyBreadthFirst)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2c54aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "FindInHierarchyBreadthFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipOffsetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_openClipOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c54c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipOffsetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationTrack::set_openClipOffsetPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c54c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipOffsetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_openClipOffsetRotation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c54c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipOffsetRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Quaternion)>(&::UnityEngine::Timeline::AnimationTrack::set_openClipOffsetRotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c54cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipOffsetEulerAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_openClipOffsetEulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c54cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipOffsetEulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipOffsetEulerAngles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Vector3)>(&::UnityEngine::Timeline::AnimationTrack::set_openClipOffsetEulerAngles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c54cc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipOffsetEulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipPreExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_openClipPreExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c54cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipPreExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation)>(&::UnityEngine::Timeline::AnimationTrack::set_openClipPreExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c54cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.get_openClipPostExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::get_openClipPostExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c54ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.set_openClipPostExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation)>(&::UnityEngine::Timeline::AnimationTrack::set_openClipPostExtrapolation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c54cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack.OnUpgradeFromVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)(int32_t)>(&::UnityEngine::Timeline::AnimationTrack::OnUpgradeFromVersion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c54cf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::AnimationTrack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::AnimationTrack::*)()>(&::UnityEngine::Timeline::AnimationTrack::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x2c54e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ILayerable"
constexpr  UnityEngine::Timeline::AnimationTrack::operator ::UnityEngine::Timeline::ILayerable*() noexcept {
return static_cast<::UnityEngine::Timeline::ILayerable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_InfiniteClipPreExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, 0xa0>(this, std::forward<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>(value));
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipPreExtrapolation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, 0xa0>(this);
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipPreExtrapolation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, 0xa0>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_InfiniteClipPostExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, 0xa4>(this, std::forward<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>(value));
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipPostExtrapolation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, 0xa4>(this);
}
constexpr ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation const& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipPostExtrapolation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, 0xa4>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_InfiniteClipOffsetPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xa8>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipOffsetPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xa8>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipOffsetPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xa8>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_InfiniteClipOffsetEulerAngles(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xb4>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipOffsetEulerAngles()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xb4>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipOffsetEulerAngles() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xb4>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_InfiniteClipTimeOffset(double_t  value)  {
::cordl_internals::setInstanceField<double_t, 0xc0>(this, std::forward<double_t>(value));
}
constexpr double_t& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipTimeOffset()  {
return ::cordl_internals::getInstanceField<double_t, 0xc0>(this);
}
constexpr double_t const& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipTimeOffset() const {
return ::cordl_internals::getInstanceField<double_t, 0xc0>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_InfiniteClipRemoveOffset(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipRemoveOffset()  {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr bool const& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipRemoveOffset() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_InfiniteClipApplyFootIK(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc9>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipApplyFootIK()  {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this);
}
constexpr bool const& UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClipApplyFootIK() const {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_mInfiniteClipLoop(::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode, 0xcc>(this, std::forward<::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode>(value));
}
constexpr ::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode& UnityEngine::Timeline::AnimationTrack::__get_mInfiniteClipLoop()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode, 0xcc>(this);
}
constexpr ::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode const& UnityEngine::Timeline::AnimationTrack::__get_mInfiniteClipLoop() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode, 0xcc>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_MatchTargetFields(::UnityEngine::Timeline::MatchTargetFields  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::MatchTargetFields, 0xd0>(this, std::forward<::UnityEngine::Timeline::MatchTargetFields>(value));
}
constexpr ::UnityEngine::Timeline::MatchTargetFields& UnityEngine::Timeline::AnimationTrack::__get_m_MatchTargetFields()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::MatchTargetFields, 0xd0>(this);
}
constexpr ::UnityEngine::Timeline::MatchTargetFields const& UnityEngine::Timeline::AnimationTrack::__get_m_MatchTargetFields() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::MatchTargetFields, 0xd0>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_Position(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xd4>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationTrack::__get_m_Position()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xd4>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationTrack::__get_m_Position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xd4>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_EulerAngles(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xe0>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::Timeline::AnimationTrack::__get_m_EulerAngles()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xe0>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Timeline::AnimationTrack::__get_m_EulerAngles() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xe0>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_AvatarMask(::UnityEngine::AvatarMask*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AvatarMask*, 0xf0>(this, std::forward<::UnityEngine::AvatarMask*>(value));
}
constexpr ::UnityEngine::AvatarMask* UnityEngine::Timeline::AnimationTrack::__get_m_AvatarMask()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AvatarMask*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AvatarMask*> UnityEngine::Timeline::AnimationTrack::__get_m_AvatarMask() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AvatarMask*, 0xf0>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_ApplyAvatarMask(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Timeline::AnimationTrack::__get_m_ApplyAvatarMask()  {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr bool const& UnityEngine::Timeline::AnimationTrack::__get_m_ApplyAvatarMask() const {
return ::cordl_internals::getInstanceField<bool, 0xf8>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_TrackOffset(::UnityEngine::Timeline::TrackOffset  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::TrackOffset, 0xfc>(this, std::forward<::UnityEngine::Timeline::TrackOffset>(value));
}
constexpr ::UnityEngine::Timeline::TrackOffset& UnityEngine::Timeline::AnimationTrack::__get_m_TrackOffset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::TrackOffset, 0xfc>(this);
}
constexpr ::UnityEngine::Timeline::TrackOffset const& UnityEngine::Timeline::AnimationTrack::__get_m_TrackOffset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::TrackOffset, 0xfc>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_InfiniteClip(::UnityEngine::AnimationClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AnimationClip*, 0x100>(this, std::forward<::UnityEngine::AnimationClip*>(value));
}
constexpr ::UnityEngine::AnimationClip* UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> UnityEngine::Timeline::AnimationTrack::__get_m_InfiniteClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AnimationClip*, 0x100>(this);
}
inline void UnityEngine::Timeline::AnimationTrack::setStaticF_s_CachedQueue(::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>*, "s_CachedQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get>(std::forward<::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>* UnityEngine::Timeline::AnimationTrack::getStaticF_s_CachedQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityEngine::Transform*>*, "s_CachedQueue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get>();
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_OpenClipOffsetRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x108>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& UnityEngine::Timeline::AnimationTrack::__get_m_OpenClipOffsetRotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x108>(this);
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::Timeline::AnimationTrack::__get_m_OpenClipOffsetRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x108>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_Rotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x118>(this, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion& UnityEngine::Timeline::AnimationTrack::__get_m_Rotation()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x118>(this);
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::Timeline::AnimationTrack::__get_m_Rotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x118>(this);
}
constexpr void UnityEngine::Timeline::AnimationTrack::__set_m_ApplyOffsets(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x128>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::Timeline::AnimationTrack::__get_m_ApplyOffsets()  {
return ::cordl_internals::getInstanceField<bool, 0x128>(this);
}
constexpr bool const& UnityEngine::Timeline::AnimationTrack::__get_m_ApplyOffsets() const {
return ::cordl_internals::getInstanceField<bool, 0x128>(this);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Timeline::AnimationTrack::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_rotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_eulerAngles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_eulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_eulerAngles(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_eulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_applyOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_applyOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_applyOffsets(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_applyOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::TrackOffset UnityEngine::Timeline::AnimationTrack::get_trackOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_trackOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TrackOffset, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_trackOffset(::UnityEngine::Timeline::TrackOffset  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_trackOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackOffset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::MatchTargetFields UnityEngine::Timeline::AnimationTrack::get_matchTargetFields()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_matchTargetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::MatchTargetFields, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_matchTargetFields(::UnityEngine::Timeline::MatchTargetFields  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_matchTargetFields",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::MatchTargetFields>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::AnimationClip* UnityEngine::Timeline::AnimationTrack::get_infiniteClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationClip*, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClip(::UnityEngine::AnimationClip*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_infiniteClipRemoveOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipRemoveOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipRemoveOffset(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipRemoveOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::AvatarMask* UnityEngine::Timeline::AnimationTrack::get_avatarMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_avatarMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AvatarMask*, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_avatarMask(::UnityEngine::AvatarMask*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_avatarMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarMask*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_applyAvatarMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_applyAvatarMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_applyAvatarMask(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_applyAvatarMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::CanCompileClips()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CanCompileClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::AnimationTrack::get_outputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_outputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*, false>(*this, ___internal_method);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_inClipMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_inClipMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetRotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_infiniteClipOffsetEulerAngles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipOffsetEulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipOffsetEulerAngles(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipOffsetEulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::AnimationTrack::get_infiniteClipApplyFootIK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipApplyFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipApplyFootIK(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipApplyFootIK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::AnimationTrack::get_infiniteClipTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipTimeOffset(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipTimeOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation UnityEngine::Timeline::AnimationTrack::get_infiniteClipPreExtrapolation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipPreExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation UnityEngine::Timeline::AnimationTrack::get_infiniteClipPostExtrapolation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipPostExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode UnityEngine::Timeline::AnimationTrack::get_infiniteClipLoop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_infiniteClipLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_infiniteClipLoop(::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_infiniteClipLoop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__AnimationPlayableAsset__LoopMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Timeline::AnimationTrack::ResetOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "ResetOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::AnimationTrack::CreateClip(::UnityEngine::AnimationClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(*this, ___internal_method, clip);
}
inline void UnityEngine::Timeline::AnimationTrack::CreateInfiniteClip(::StringW  infiniteClipName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateInfiniteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, infiniteClipName);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::AnimationTrack::CreateRecordableClip(::StringW  animClipName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateRecordableClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(*this, ___internal_method, animClipName);
}
inline void UnityEngine::Timeline::AnimationTrack::OnCreateClip(::UnityEngine::Timeline::TimelineClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "OnCreateClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clip);
}
inline int32_t UnityEngine::Timeline::AnimationTrack::CalculateItemsHash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CalculateItemsHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::UpdateClipOffsets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "UpdateClipOffsets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::CompileTrackPlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Timeline::AnimationTrack*  track, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree, ::UnityEngine::Timeline::AppliedOffsetMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CompileTrackPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AnimationTrack*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method, graph, track, go, tree, mode);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::UnityEngine_Timeline_ILayerable_CreateLayerMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "UnityEngine.Timeline.ILayerable.CreateLayerMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method, graph, go, inputCount);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateMixerPlayableGraph",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method, graph, go, tree);
}
inline int32_t UnityEngine::Timeline::AnimationTrack::GetDefaultBlendCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetDefaultBlendCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::AttachDefaultBlend(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animations::AnimationLayerMixerPlayable  mixer, bool  requireOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "AttachDefaultBlend",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animations::AnimationLayerMixerPlayable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, graph, mixer, requireOffset);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::AttachOffsetPlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::Playable  playable, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "AttachOffsetPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method, graph, playable, pos, rot);
}
inline bool UnityEngine::Timeline::AnimationTrack::RequiresMotionXPlayable(::UnityEngine::Timeline::AppliedOffsetMode  mode, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "RequiresMotionXPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, mode, gameObject);
}
inline bool UnityEngine::Timeline::AnimationTrack::UsesAbsoluteMotion(::UnityEngine::Timeline::AppliedOffsetMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "UsesAbsoluteMotion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mode);
}
inline bool UnityEngine::Timeline::AnimationTrack::HasController(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "HasController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, gameObject);
}
inline ::UnityEngine::Animator* UnityEngine::Timeline::AnimationTrack::GetBinding(::UnityEngine::Playables::PlayableDirector*  director)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animator*, false>(*this, ___internal_method, director);
}
inline ::UnityEngine::Animations::AnimationLayerMixerPlayable UnityEngine::Timeline::AnimationTrack::CreateGroupMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateGroupMixer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationLayerMixerPlayable, false>(nullptr, ___internal_method, graph, go, inputCount);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::CreateInfiniteTrackPlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree, ::UnityEngine::Timeline::AppliedOffsetMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "CreateInfiniteTrackPlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method, graph, go, tree, mode);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::AnimationTrack::ApplyTrackOffset(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::Playable  root, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::AppliedOffsetMode  mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "ApplyTrackOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::AppliedOffsetMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method, graph, root, go, mode);
}
inline void UnityEngine::Timeline::AnimationTrack::GetEvaluationTime(ByRef<double_t>  outStart, ByRef<double_t>  outDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetEvaluationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, outStart, outDuration);
}
inline void UnityEngine::Timeline::AnimationTrack::GetSequenceTime(ByRef<double_t>  outStart, ByRef<double_t>  outDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetSequenceTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, outStart, outDuration);
}
inline void UnityEngine::Timeline::AnimationTrack::AssignAnimationClip(::UnityEngine::Timeline::TimelineClip*  clip, ::UnityEngine::AnimationClip*  animClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "AssignAnimationClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, clip, animClip);
}
inline void UnityEngine::Timeline::AnimationTrack::GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GatherProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IPropertyCollector*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, director, driver);
}
inline void UnityEngine::Timeline::AnimationTrack::GetAnimationClips(::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>*  animClips)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetAnimationClips",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::AnimationClip*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, animClips);
}
inline ::UnityEngine::Timeline::AppliedOffsetMode UnityEngine::Timeline::AnimationTrack::GetOffsetMode(::UnityEngine::GameObject*  go, bool  animatesRootTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetOffsetMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::AppliedOffsetMode, false>(*this, ___internal_method, go, animatesRootTransform);
}
inline bool UnityEngine::Timeline::AnimationTrack::IsRootTransformDisabledByMask(::UnityEngine::GameObject*  gameObject, ::UnityEngine::Transform*  genericRootNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "IsRootTransformDisabledByMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, gameObject, genericRootNode);
}
inline ::UnityEngine::Transform* UnityEngine::Timeline::AnimationTrack::GetGenericRootNode(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "GetGenericRootNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method, gameObject);
}
inline bool UnityEngine::Timeline::AnimationTrack::AnimatesRootTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "AnimatesRootTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::Transform* UnityEngine::Timeline::AnimationTrack::FindInHierarchyBreadthFirst(::UnityEngine::Transform*  t, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "FindInHierarchyBreadthFirst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(nullptr, ___internal_method, t, name);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_openClipOffsetPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipOffsetPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipOffsetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion UnityEngine::Timeline::AnimationTrack::get_openClipOffsetRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipOffsetRotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipOffsetRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Timeline::AnimationTrack::get_openClipOffsetEulerAngles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipOffsetEulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipOffsetEulerAngles(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipOffsetEulerAngles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation UnityEngine::Timeline::AnimationTrack::get_openClipPreExtrapolation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipPreExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation UnityEngine::Timeline::AnimationTrack::get_openClipPostExtrapolation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "get_openClipPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation, false>(*this, ___internal_method);
}
inline void UnityEngine::Timeline::AnimationTrack::set_openClipPostExtrapolation(::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "set_openClipPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimelineClip__ClipExtrapolation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::Timeline::AnimationTrack::OnUpgradeFromVersion(int32_t  oldVersion)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            "OnUpgradeFromVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, oldVersion);
}
inline ::UnityEngine::Timeline::AnimationTrack* UnityEngine::Timeline::AnimationTrack::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::AnimationTrack*>());
}
inline void UnityEngine::Timeline::AnimationTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::AnimationTrack*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
