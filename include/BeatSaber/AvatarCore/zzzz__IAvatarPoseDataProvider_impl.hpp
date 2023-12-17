#pragma once
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseDataProvider_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarPoseDataProvider.get_currentPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::AvatarCore::AvatarPoseData (::BeatSaber::AvatarCore::IAvatarPoseDataProvider::*)()>(&::BeatSaber::AvatarCore::IAvatarPoseDataProvider::get_currentPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarPoseDataProvider.add_poseDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::IAvatarPoseDataProvider::*)(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*)>(&::BeatSaber::AvatarCore::IAvatarPoseDataProvider::add_poseDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::IAvatarPoseDataProvider.remove_poseDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::IAvatarPoseDataProvider::*)(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*)>(&::BeatSaber::AvatarCore::IAvatarPoseDataProvider::remove_poseDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
inline ::BeatSaber::AvatarCore::AvatarPoseData BeatSaber::AvatarCore::IAvatarPoseDataProvider::get_currentPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                            "get_currentPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::AvatarPoseData, false>(*this, ___internal_method);
}
inline void BeatSaber::AvatarCore::IAvatarPoseDataProvider::add_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                            "add_poseDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::IAvatarPoseDataProvider::remove_poseDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseDataProvider*>::get(),
                            "remove_poseDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::AvatarPoseData>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
