#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Audio/zzzz__AudioSampleProvider_def.hpp"
#include "UnityEngine/Experimental/Audio/zzzz__AudioSampleProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2c9d310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::*)(::UnityEngine::Experimental::Audio::AudioSampleProvider*, uint32_t)>(&::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c9d440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>(object, method));
}
inline void UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler::Invoke(::UnityEngine::Experimental::Audio::AudioSampleProvider*  provider, uint32_t  sampleFrameCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, provider, sampleFrameCount);
}
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::AudioSampleProvider.InvokeSampleFramesAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int32_t)>(&::UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c9d2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(),
                            "InvokeSampleFramesAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Audio::AudioSampleProvider.InvokeSampleFramesOverflow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Audio::AudioSampleProvider::*)(int32_t)>(&::UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c9d2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(),
                            "InvokeSampleFramesOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Experimental::Audio::AudioSampleProvider::__set_sampleFramesAvailable(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*, 0x10>(this, std::forward<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>(value));
}
constexpr ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* UnityEngine::Experimental::Audio::AudioSampleProvider::__get_sampleFramesAvailable()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*> UnityEngine::Experimental::Audio::AudioSampleProvider::__get_sampleFramesAvailable() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*, 0x10>(this);
}
constexpr void UnityEngine::Experimental::Audio::AudioSampleProvider::__set_sampleFramesOverflow(::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*, 0x18>(this, std::forward<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*>(value));
}
constexpr ::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler* UnityEngine::Experimental::Audio::AudioSampleProvider::__get_sampleFramesOverflow()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*> UnityEngine::Experimental::Audio::AudioSampleProvider::__get_sampleFramesOverflow() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Experimental::Audio::__AudioSampleProvider__SampleFramesHandler*, 0x18>(this);
}
inline void UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesAvailable(int32_t  sampleFrameCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(),
                            "InvokeSampleFramesAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sampleFrameCount);
}
inline void UnityEngine::Experimental::Audio::AudioSampleProvider::InvokeSampleFramesOverflow(int32_t  droppedSampleFrameCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Audio::AudioSampleProvider*>::get(),
                            "InvokeSampleFramesOverflow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, droppedSampleFrameCount);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
