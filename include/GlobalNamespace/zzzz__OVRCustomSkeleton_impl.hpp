#pragma once
#include "GlobalNamespace/zzzz__OVRSkeleton_impl.hpp"
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRCustomSkeleton_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
constexpr void GlobalNamespace::__OVRCustomSkeleton__RetargetingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__OVRCustomSkeleton__RetargetingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__OVRCustomSkeleton__RetargetingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType::__OVRCustomSkeleton__RetargetingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType  GlobalNamespace::__OVRCustomSkeleton__RetargetingType::OculusSkeleton{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.get_CustomBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Transform*>* (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::get_CustomBones)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aa0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "get_CustomBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.GetBoneTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::GlobalNamespace::OVRCustomSkeleton::*)(::GlobalNamespace::__OVRSkeleton__BoneId)>(&::GlobalNamespace::OVRCustomSkeleton::GetBoneTransform)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27aa0b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27aa108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27aa10c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.AllocateBones
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::AllocateBones)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x27aa110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "AllocateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton.SetSkeletonType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)(::GlobalNamespace::__OVRSkeleton__SkeletonType)>(&::GlobalNamespace::OVRCustomSkeleton::SetSkeletonType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27aa1d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRCustomSkeleton._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRCustomSkeleton::*)()>(&::GlobalNamespace::OVRCustomSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27aa260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  GlobalNamespace::OVRCustomSkeleton::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::OVRCustomSkeleton::__set__customBones_V2(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, 0xb8>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GlobalNamespace::OVRCustomSkeleton::__get__customBones_V2()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*> GlobalNamespace::OVRCustomSkeleton::__get__customBones_V2() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, 0xb8>(this);
}
constexpr void GlobalNamespace::OVRCustomSkeleton::__set_retargetingType(::GlobalNamespace::__OVRCustomSkeleton__RetargetingType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__OVRCustomSkeleton__RetargetingType, 0xc0>(this, std::forward<::GlobalNamespace::__OVRCustomSkeleton__RetargetingType>(value));
}
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType& GlobalNamespace::OVRCustomSkeleton::__get_retargetingType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRCustomSkeleton__RetargetingType, 0xc0>(this);
}
constexpr ::GlobalNamespace::__OVRCustomSkeleton__RetargetingType const& GlobalNamespace::OVRCustomSkeleton::__get_retargetingType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__OVRCustomSkeleton__RetargetingType, 0xc0>(this);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GlobalNamespace::OVRCustomSkeleton::get_CustomBones()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "get_CustomBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Transform* GlobalNamespace::OVRCustomSkeleton::GetBoneTransform(::GlobalNamespace::__OVRSkeleton__BoneId  boneId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "GetBoneTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSkeleton__BoneId>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method, boneId);
}
inline void GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::AllocateBones()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "AllocateBones",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRCustomSkeleton::SetSkeletonType(::GlobalNamespace::__OVRSkeleton__SkeletonType  skeletonType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            "SetSkeletonType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRSkeleton__SkeletonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, skeletonType);
}
inline ::GlobalNamespace::OVRCustomSkeleton* GlobalNamespace::OVRCustomSkeleton::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRCustomSkeleton*>());
}
inline void GlobalNamespace::OVRCustomSkeleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRCustomSkeleton*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
