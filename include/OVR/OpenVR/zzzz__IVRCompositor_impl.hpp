#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_CumulativeStats_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__Compositor_FrameTiming_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorError_def.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVREye_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "OVR/OpenVR/zzzz__EVRCompositorTimingMode_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRSubmitFlags_def.hpp"
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dc20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::*)(::OVR::OpenVR::ETrackingUniverseOrigin)>(&::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dc2d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27dc2e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___SetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dc368;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace* OVR::OpenVR::__IVRCompositor___SetTrackingSpace::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SetTrackingSpace::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___SetTrackingSpace::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eOrigin);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SetTrackingSpace::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackingUniverseOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, eOrigin, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___SetTrackingSpace::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dc374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::*)()>(&::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dc430;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dc444;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::ETrackingUniverseOrigin (::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetTrackingSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27dc464;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace* OVR::OpenVR::__IVRCompositor___GetTrackingSpace::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetTrackingSpace::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::__IVRCompositor___GetTrackingSpace::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetTrackingSpace::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::ETrackingUniverseOrigin OVR::OpenVR::__IVRCompositor___GetTrackingSpace::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::ETrackingUniverseOrigin, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___WaitGetPoses._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___WaitGetPoses::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___WaitGetPoses::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27dc48c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___WaitGetPoses.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___WaitGetPoses::*)(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___WaitGetPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dc564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___WaitGetPoses.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___WaitGetPoses::*)(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___WaitGetPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27dc578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___WaitGetPoses.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___WaitGetPoses::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___WaitGetPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27dc624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___WaitGetPoses* OVR::OpenVR::__IVRCompositor___WaitGetPoses::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___WaitGetPoses::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___WaitGetPoses::Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pRenderPoseArray, uint32_t  unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pGamePoseArray, uint32_t  unGamePoseArrayCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___WaitGetPoses::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pRenderPoseArray, uint32_t  unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pGamePoseArray, uint32_t  unGamePoseArrayCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___WaitGetPoses::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoses._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetLastPoses::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoses::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27dc64c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoses.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetLastPoses::*)(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoses::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dc724;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoses.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetLastPoses::*)(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoses::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x27dc738;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoses.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetLastPoses::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoses::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27dc7e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetLastPoses* OVR::OpenVR::__IVRCompositor___GetLastPoses::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetLastPoses::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetLastPoses::Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pRenderPoseArray, uint32_t  unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pGamePoseArray, uint32_t  unGamePoseArrayCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetLastPoses::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pRenderPoseArray, uint32_t  unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>  pGamePoseArray, uint32_t  unGamePoseArrayCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t,::Array<::OVR::OpenVR::TrackedDevicePose_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetLastPoses::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dc80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dc8d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(uint32_t, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27dc8e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::*)(ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27dc9bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex* OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::Invoke(uint32_t  unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputGamePose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::BeginInvoke(uint32_t  unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputGamePose, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, unDeviceIndex, pOutputPose, pOutputGamePose, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex::EndInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t>  pOutputGamePose, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::TrackedDevicePose_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, pOutputPose, pOutputGamePose, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___Submit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___Submit::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___Submit::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dc9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___Submit.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___Submit::*)(::OVR::OpenVR::EVREye, ByRef<::OVR::OpenVR::Texture_t>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags)>(&::OVR::OpenVR::__IVRCompositor___Submit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dcab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___Submit.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___Submit::*)(::OVR::OpenVR::EVREye, ByRef<::OVR::OpenVR::Texture_t>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::OVR::OpenVR::EVRSubmitFlags, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___Submit::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x27dcac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___Submit.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___Submit::*)(ByRef<::OVR::OpenVR::Texture_t>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___Submit::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27dcbe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___Submit* OVR::OpenVR::__IVRCompositor___Submit::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___Submit*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___Submit::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___Submit::Invoke(::OVR::OpenVR::EVREye  eEye, ByRef<::OVR::OpenVR::Texture_t>  pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t>  pBounds, ::OVR::OpenVR::EVRSubmitFlags  nSubmitFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Texture_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSubmitFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___Submit::BeginInvoke(::OVR::OpenVR::EVREye  eEye, ByRef<::OVR::OpenVR::Texture_t>  pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t>  pBounds, ::OVR::OpenVR::EVRSubmitFlags  nSubmitFlags, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Texture_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRSubmitFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, eEye, pTexture, pBounds, nSubmitFlags, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___Submit::EndInvoke(ByRef<::OVR::OpenVR::Texture_t>  pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t>  pBounds, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___Submit*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Texture_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::VRTextureBounds_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, pTexture, pBounds, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dcc18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::*)()>(&::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dccd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dcce8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dcd08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame* OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dcd14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::*)()>(&::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dcdd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dcde4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___PostPresentHandoff::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dce04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff* OVR::OpenVR::__IVRCompositor___PostPresentHandoff::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___PostPresentHandoff::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___PostPresentHandoff::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___PostPresentHandoff::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___PostPresentHandoff::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTiming._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetFrameTiming::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTiming::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27dce10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTiming.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___GetFrameTiming::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTiming::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dcee8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTiming.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetFrameTiming::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTiming::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27dcefc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTiming.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___GetFrameTiming::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTiming::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27dcfb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetFrameTiming* OVR::OpenVR::__IVRCompositor___GetFrameTiming::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetFrameTiming::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___GetFrameTiming::Invoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  unFramesAgo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pTiming, unFramesAgo);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetFrameTiming::BeginInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  unFramesAgo, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pTiming, unFramesAgo, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___GetFrameTiming::EndInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pTiming, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetFrameTimings::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimings::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27dcfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimings.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetFrameTimings::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimings::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dd0b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimings.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetFrameTimings::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimings::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27dd0cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimings.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetFrameTimings::*)(ByRef<::OVR::OpenVR::Compositor_FrameTiming>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimings::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27dd184;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetFrameTimings* OVR::OpenVR::__IVRCompositor___GetFrameTimings::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetFrameTimings::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetFrameTimings::Invoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  nFrames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pTiming, nFrames);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetFrameTimings::BeginInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, uint32_t  nFrames, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pTiming, nFrames, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetFrameTimings::EndInvoke(ByRef<::OVR::OpenVR::Compositor_FrameTiming>  pTiming, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_FrameTiming>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pTiming, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dd1b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::*)()>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dd26c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dd280;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27dd2a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining* OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline float_t OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27dd2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::*)(ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dd3a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::*)(ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x27dd3b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::*)(ByRef<::OVR::OpenVR::Compositor_CumulativeStats>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetCumulativeStats::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27dd46c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats* OVR::OpenVR::__IVRCompositor___GetCumulativeStats::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetCumulativeStats::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___GetCumulativeStats::Invoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats>  pStats, uint32_t  nStatsSizeInBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_CumulativeStats>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pStats, nStatsSizeInBytes);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetCumulativeStats::BeginInvoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats>  pStats, uint32_t  nStatsSizeInBytes, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_CumulativeStats>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pStats, nStatsSizeInBytes, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___GetCumulativeStats::EndInvoke(ByRef<::OVR::OpenVR::Compositor_CumulativeStats>  pStats, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::Compositor_CumulativeStats>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pStats, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeToColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeToColor::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___FadeToColor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dd488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeToColor.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool)>(&::OVR::OpenVR::__IVRCompositor___FadeToColor::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27dd54c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeToColor.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___FadeToColor::*)(float_t, float_t, float_t, float_t, float_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___FadeToColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27dd564;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeToColor.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeToColor::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___FadeToColor::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dd678;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___FadeToColor* OVR::OpenVR::__IVRCompositor___FadeToColor::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___FadeToColor*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___FadeToColor::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___FadeToColor::Invoke(float_t  fSeconds, float_t  fRed, float_t  fGreen, float_t  fBlue, float_t  fAlpha, bool  bBackground)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___FadeToColor::BeginInvoke(float_t  fSeconds, float_t  fRed, float_t  fGreen, float_t  fBlue, float_t  fAlpha, bool  bBackground, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, fSeconds, fRed, fGreen, fBlue, fAlpha, bBackground, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___FadeToColor::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeToColor*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dd684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::*)(bool)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27dd748;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27dd760;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdColor_t (::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27dd7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor* OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::Invoke(bool  bBackground)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t, false>(*this, ___internal_method, bBackground);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::BeginInvoke(bool  bBackground, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, bBackground, callback, object);
}
inline ::OVR::OpenVR::HmdColor_t OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::HmdColor_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeGrid._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeGrid::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___FadeGrid::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dd814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeGrid.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeGrid::*)(float_t, bool)>(&::OVR::OpenVR::__IVRCompositor___FadeGrid::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27dd8d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeGrid.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___FadeGrid::*)(float_t, bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___FadeGrid::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dd8f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___FadeGrid.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___FadeGrid::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___FadeGrid::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dd9ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___FadeGrid* OVR::OpenVR::__IVRCompositor___FadeGrid::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___FadeGrid*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___FadeGrid::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___FadeGrid::Invoke(float_t  fSeconds, bool  bFadeIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fSeconds, bFadeIn);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___FadeGrid::BeginInvoke(float_t  fSeconds, bool  bFadeIn, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, fSeconds, bFadeIn, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___FadeGrid::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___FadeGrid*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dd9b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::*)()>(&::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dda74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dda88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ddaa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha* OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline float_t OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline float_t OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27ddad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::*)(ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ddba8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::*)(ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27ddbbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ddc50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride* OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::Invoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>  pTextures, uint32_t  unTextureCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, pTextures, unTextureCount);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>  pTextures, uint32_t  unTextureCount, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::Texture_t,::Array<::OVR::OpenVR::Texture_t>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pTextures, unTextureCount, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___SetSkyboxOverride::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27ddc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::*)()>(&::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ddd34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27ddd48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ddd68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride* OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27ddd74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::*)()>(&::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dde30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dde44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___CompositorBringToFront::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dde64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront* OVR::OpenVR::__IVRCompositor___CompositorBringToFront::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CompositorBringToFront::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorBringToFront::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CompositorBringToFront::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorBringToFront::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dde70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::*)()>(&::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27ddf2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27ddf40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___CompositorGoToBack::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ddf60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack* OVR::OpenVR::__IVRCompositor___CompositorGoToBack::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CompositorGoToBack::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorGoToBack::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CompositorGoToBack::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorGoToBack::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorQuit._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorQuit::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___CompositorQuit::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27ddf6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorQuit.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorQuit::*)()>(&::OVR::OpenVR::__IVRCompositor___CompositorQuit::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de028;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorQuit.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___CompositorQuit::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CompositorQuit::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de03c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorQuit.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorQuit::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___CompositorQuit::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27de05c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CompositorQuit* OVR::OpenVR::__IVRCompositor___CompositorQuit::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CompositorQuit::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorQuit::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CompositorQuit::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorQuit::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsFullscreen._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___IsFullscreen::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___IsFullscreen::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsFullscreen.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___IsFullscreen::*)()>(&::OVR::OpenVR::__IVRCompositor___IsFullscreen::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de124;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsFullscreen.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___IsFullscreen::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___IsFullscreen::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de138;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsFullscreen.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___IsFullscreen::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___IsFullscreen::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27de158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___IsFullscreen* OVR::OpenVR::__IVRCompositor___IsFullscreen::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___IsFullscreen::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___IsFullscreen::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___IsFullscreen::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___IsFullscreen::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::*)()>(&::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de23c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de250;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27de270;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess* OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::*)()>(&::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de354;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de368;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27de388;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer* OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CanRenderScene._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CanRenderScene::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___CanRenderScene::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de3b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CanRenderScene.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___CanRenderScene::*)()>(&::OVR::OpenVR::__IVRCompositor___CanRenderScene::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de46c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CanRenderScene.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___CanRenderScene::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CanRenderScene::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CanRenderScene.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___CanRenderScene::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___CanRenderScene::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27de4a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CanRenderScene* OVR::OpenVR::__IVRCompositor___CanRenderScene::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CanRenderScene::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___CanRenderScene::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CanRenderScene::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___CanRenderScene::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::*)()>(&::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de584;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de598;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27de5b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow* OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ShowMirrorWindow::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de5c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::*)()>(&::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de680;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de694;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___HideMirrorWindow::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27de6b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow* OVR::OpenVR::__IVRCompositor___HideMirrorWindow::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___HideMirrorWindow::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___HideMirrorWindow::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___HideMirrorWindow::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___HideMirrorWindow::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::*)()>(&::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de77c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de790;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27de7b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible* OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::*)()>(&::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de894;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de8a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___CompositorDumpImages::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27de8c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages* OVR::OpenVR::__IVRCompositor___CompositorDumpImages::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___CompositorDumpImages::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorDumpImages::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___CompositorDumpImages::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___CompositorDumpImages::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27de8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::*)()>(&::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27de990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27de9a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27de9c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources* OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27de9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::*)(bool)>(&::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27deab0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27deac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27deb50;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn* OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::Invoke(bool  bOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bOverride);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::BeginInvoke(bool  bOverride, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, bOverride, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27deb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::*)()>(&::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dec18;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dec2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dec4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess* OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ForceReconnectProcess::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SuspendRendering._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SuspendRendering::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___SuspendRendering::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dec58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SuspendRendering.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SuspendRendering::*)(bool)>(&::OVR::OpenVR::__IVRCompositor___SuspendRendering::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27ded1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SuspendRendering.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___SuspendRendering::*)(bool, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___SuspendRendering::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27ded34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SuspendRendering.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SuspendRendering::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___SuspendRendering::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dedbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SuspendRendering* OVR::OpenVR::__IVRCompositor___SuspendRendering::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SuspendRendering::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___SuspendRendering::Invoke(bool  bSuspend)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bSuspend);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SuspendRendering::BeginInvoke(bool  bSuspend, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, bSuspend, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___SuspendRendering::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dedc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::*)(::OVR::OpenVR::EVREye, ::cordl_internals::intptr_t, ByRef<::cordl_internals::intptr_t>)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dee8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::*)(::OVR::OpenVR::EVREye, ::cordl_internals::intptr_t, ByRef<::cordl_internals::intptr_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x27deea0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::*)(ByRef<::cordl_internals::intptr_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27def70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11* OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::Invoke(::OVR::OpenVR::EVREye  eEye, ::cordl_internals::intptr_t  pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t>  ppD3D11ShaderResourceView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::BeginInvoke(::OVR::OpenVR::EVREye  eEye, ::cordl_internals::intptr_t  pD3D11DeviceOrResource, ByRef<::cordl_internals::intptr_t>  ppD3D11ShaderResourceView, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, eEye, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11::EndInvoke(ByRef<::cordl_internals::intptr_t>  ppD3D11ShaderResourceView, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, ppD3D11ShaderResourceView, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27def9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df060;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27df074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27df0f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11* OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::Invoke(::cordl_internals::intptr_t  pD3D11ShaderResourceView)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, pD3D11ShaderResourceView);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::BeginInvoke(::cordl_internals::intptr_t  pD3D11ShaderResourceView, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pD3D11ShaderResourceView, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::*)(::OVR::OpenVR::EVREye, ByRef<uint32_t>, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df1c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::*)(::OVR::OpenVR::EVREye, ByRef<uint32_t>, ::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x27df1dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::*)(ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27df2c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL* OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::Invoke(::OVR::OpenVR::EVREye  eEye, ByRef<uint32_t>  pglTextureId, ::cordl_internals::intptr_t  pglSharedTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::BeginInvoke(::OVR::OpenVR::EVREye  eEye, ByRef<uint32_t>  pglTextureId, ::cordl_internals::intptr_t  pglSharedTextureHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVREye>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, eEye, pglTextureId, pglSharedTextureHandle, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL::EndInvoke(ByRef<uint32_t>  pglTextureId, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, pglTextureId, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df2f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::*)(uint32_t, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df3b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::*)(uint32_t, ::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x27df3c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27df47c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture* OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::Invoke(uint32_t  glTextureId, ::cordl_internals::intptr_t  glSharedTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, glTextureId, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::BeginInvoke(uint32_t  glTextureId, ::cordl_internals::intptr_t  glSharedTextureHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, glTextureId, glSharedTextureHandle, callback, object);
}
inline bool OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df4a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::*)(::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df568;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::*)(::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27df57c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27df600;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess* OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::Invoke(::cordl_internals::intptr_t  glSharedTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::BeginInvoke(::cordl_internals::intptr_t  glSharedTextureHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, glSharedTextureHandle, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df6d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::cordl_internals::intptr_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27df6e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27df768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess* OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::Invoke(::cordl_internals::intptr_t  glSharedTextureHandle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, glSharedTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::BeginInvoke(::cordl_internals::intptr_t  glSharedTextureHandle, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, glSharedTextureHandle, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27df774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df84c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x27df860;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27df8f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired* OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::Invoke(::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::BeginInvoke(::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27df91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::cordl_internals::intptr_t, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27df9e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::cordl_internals::intptr_t, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27df9f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27dfab0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired* OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::Invoke(::cordl_internals::intptr_t  pPhysicalDevice, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::BeginInvoke(::cordl_internals::intptr_t  pPhysicalDevice, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, pPhysicalDevice, pchValue, unBufferSize, callback, object);
}
inline uint32_t OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27dfad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::*)(::OVR::OpenVR::EVRCompositorTimingMode)>(&::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dfb9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::*)(::OVR::OpenVR::EVRCompositorTimingMode, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27dfbb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27dfc34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode* OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::Invoke(::OVR::OpenVR::EVRCompositorTimingMode  eTimingMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRCompositorTimingMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eTimingMode);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::BeginInvoke(::OVR::OpenVR::EVRCompositorTimingMode  eTimingMode, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRCompositorTimingMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, eTimingMode, callback, object);
}
inline void OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x27dfc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::*)()>(&::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27dfcfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27dfd10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27dfd30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData* OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>(object, method));
}
inline void OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, callback, object);
}
inline ::OVR::OpenVR::EVRCompositorError OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRCompositorError, false>(*this, ___internal_method, result);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SetTrackingSpace(::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___SetTrackingSpace* OVR::OpenVR::IVRCompositor::__get_SetTrackingSpace()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*> OVR::OpenVR::IVRCompositor::__get_SetTrackingSpace() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetTrackingSpace(::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace* OVR::OpenVR::IVRCompositor::__get_GetTrackingSpace()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*> OVR::OpenVR::IVRCompositor::__get_GetTrackingSpace() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_WaitGetPoses(::OVR::OpenVR::__IVRCompositor___WaitGetPoses*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___WaitGetPoses* OVR::OpenVR::IVRCompositor::__get_WaitGetPoses()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*> OVR::OpenVR::IVRCompositor::__get_WaitGetPoses() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___WaitGetPoses*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetLastPoses(::OVR::OpenVR::__IVRCompositor___GetLastPoses*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastPoses*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetLastPoses*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetLastPoses* OVR::OpenVR::IVRCompositor::__get_GetLastPoses()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastPoses*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetLastPoses*> OVR::OpenVR::IVRCompositor::__get_GetLastPoses() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastPoses*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetLastPoseForTrackedDeviceIndex(::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex* OVR::OpenVR::IVRCompositor::__get_GetLastPoseForTrackedDeviceIndex()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*> OVR::OpenVR::IVRCompositor::__get_GetLastPoseForTrackedDeviceIndex() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_Submit(::OVR::OpenVR::__IVRCompositor___Submit*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___Submit*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___Submit*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___Submit* OVR::OpenVR::IVRCompositor::__get_Submit()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___Submit*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___Submit*> OVR::OpenVR::IVRCompositor::__get_Submit() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___Submit*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ClearLastSubmittedFrame(::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame* OVR::OpenVR::IVRCompositor::__get_ClearLastSubmittedFrame()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*> OVR::OpenVR::IVRCompositor::__get_ClearLastSubmittedFrame() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_PostPresentHandoff(::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff* OVR::OpenVR::IVRCompositor::__get_PostPresentHandoff()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*> OVR::OpenVR::IVRCompositor::__get_PostPresentHandoff() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetFrameTiming(::OVR::OpenVR::__IVRCompositor___GetFrameTiming*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetFrameTiming* OVR::OpenVR::IVRCompositor::__get_GetFrameTiming()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*> OVR::OpenVR::IVRCompositor::__get_GetFrameTiming() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTiming*, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetFrameTimings(::OVR::OpenVR::__IVRCompositor___GetFrameTimings*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetFrameTimings* OVR::OpenVR::IVRCompositor::__get_GetFrameTimings()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*> OVR::OpenVR::IVRCompositor::__get_GetFrameTimings() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTimings*, 0x48>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetFrameTimeRemaining(::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining* OVR::OpenVR::IVRCompositor::__get_GetFrameTimeRemaining()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*> OVR::OpenVR::IVRCompositor::__get_GetFrameTimeRemaining() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*, 0x50>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetCumulativeStats(::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats* OVR::OpenVR::IVRCompositor::__get_GetCumulativeStats()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*> OVR::OpenVR::IVRCompositor::__get_GetCumulativeStats() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*, 0x58>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_FadeToColor(::OVR::OpenVR::__IVRCompositor___FadeToColor*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___FadeToColor*, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___FadeToColor*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___FadeToColor* OVR::OpenVR::IVRCompositor::__get_FadeToColor()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___FadeToColor*, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___FadeToColor*> OVR::OpenVR::IVRCompositor::__get_FadeToColor() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___FadeToColor*, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetCurrentFadeColor(::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor* OVR::OpenVR::IVRCompositor::__get_GetCurrentFadeColor()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*> OVR::OpenVR::IVRCompositor::__get_GetCurrentFadeColor() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_FadeGrid(::OVR::OpenVR::__IVRCompositor___FadeGrid*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___FadeGrid*, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___FadeGrid*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___FadeGrid* OVR::OpenVR::IVRCompositor::__get_FadeGrid()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___FadeGrid*, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___FadeGrid*> OVR::OpenVR::IVRCompositor::__get_FadeGrid() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___FadeGrid*, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetCurrentGridAlpha(::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha* OVR::OpenVR::IVRCompositor::__get_GetCurrentGridAlpha()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*> OVR::OpenVR::IVRCompositor::__get_GetCurrentGridAlpha() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SetSkyboxOverride(::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride* OVR::OpenVR::IVRCompositor::__get_SetSkyboxOverride()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*> OVR::OpenVR::IVRCompositor::__get_SetSkyboxOverride() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*, 0x80>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ClearSkyboxOverride(::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride* OVR::OpenVR::IVRCompositor::__get_ClearSkyboxOverride()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*> OVR::OpenVR::IVRCompositor::__get_ClearSkyboxOverride() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*, 0x88>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CompositorBringToFront(::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront* OVR::OpenVR::IVRCompositor::__get_CompositorBringToFront()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*> OVR::OpenVR::IVRCompositor::__get_CompositorBringToFront() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*, 0x90>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CompositorGoToBack(::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack* OVR::OpenVR::IVRCompositor::__get_CompositorGoToBack()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*> OVR::OpenVR::IVRCompositor::__get_CompositorGoToBack() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CompositorQuit(::OVR::OpenVR::__IVRCompositor___CompositorQuit*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorQuit*, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___CompositorQuit*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___CompositorQuit* OVR::OpenVR::IVRCompositor::__get_CompositorQuit()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorQuit*, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___CompositorQuit*> OVR::OpenVR::IVRCompositor::__get_CompositorQuit() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorQuit*, 0xa0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_IsFullscreen(::OVR::OpenVR::__IVRCompositor___IsFullscreen*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___IsFullscreen*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___IsFullscreen*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___IsFullscreen* OVR::OpenVR::IVRCompositor::__get_IsFullscreen()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___IsFullscreen*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___IsFullscreen*> OVR::OpenVR::IVRCompositor::__get_IsFullscreen() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___IsFullscreen*, 0xa8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetCurrentSceneFocusProcess(::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess* OVR::OpenVR::IVRCompositor::__get_GetCurrentSceneFocusProcess()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*> OVR::OpenVR::IVRCompositor::__get_GetCurrentSceneFocusProcess() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*, 0xb0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetLastFrameRenderer(::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer* OVR::OpenVR::IVRCompositor::__get_GetLastFrameRenderer()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*> OVR::OpenVR::IVRCompositor::__get_GetLastFrameRenderer() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CanRenderScene(::OVR::OpenVR::__IVRCompositor___CanRenderScene*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___CanRenderScene*, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___CanRenderScene*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___CanRenderScene* OVR::OpenVR::IVRCompositor::__get_CanRenderScene()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CanRenderScene*, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___CanRenderScene*> OVR::OpenVR::IVRCompositor::__get_CanRenderScene() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CanRenderScene*, 0xc0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ShowMirrorWindow(::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*, 0xc8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow* OVR::OpenVR::IVRCompositor::__get_ShowMirrorWindow()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*, 0xc8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*> OVR::OpenVR::IVRCompositor::__get_ShowMirrorWindow() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*, 0xc8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_HideMirrorWindow(::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*, 0xd0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow* OVR::OpenVR::IVRCompositor::__get_HideMirrorWindow()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*, 0xd0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*> OVR::OpenVR::IVRCompositor::__get_HideMirrorWindow() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*, 0xd0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_IsMirrorWindowVisible(::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*, 0xd8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible* OVR::OpenVR::IVRCompositor::__get_IsMirrorWindowVisible()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*, 0xd8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*> OVR::OpenVR::IVRCompositor::__get_IsMirrorWindowVisible() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*, 0xd8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_CompositorDumpImages(::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*, 0xe0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages* OVR::OpenVR::IVRCompositor::__get_CompositorDumpImages()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*, 0xe0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*> OVR::OpenVR::IVRCompositor::__get_CompositorDumpImages() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*, 0xe0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ShouldAppRenderWithLowResources(::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*, 0xe8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources* OVR::OpenVR::IVRCompositor::__get_ShouldAppRenderWithLowResources()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*, 0xe8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*> OVR::OpenVR::IVRCompositor::__get_ShouldAppRenderWithLowResources() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*, 0xe8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ForceInterleavedReprojectionOn(::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*, 0xf0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn* OVR::OpenVR::IVRCompositor::__get_ForceInterleavedReprojectionOn()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*, 0xf0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*> OVR::OpenVR::IVRCompositor::__get_ForceInterleavedReprojectionOn() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*, 0xf0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ForceReconnectProcess(::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess* OVR::OpenVR::IVRCompositor::__get_ForceReconnectProcess()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*> OVR::OpenVR::IVRCompositor::__get_ForceReconnectProcess() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SuspendRendering(::OVR::OpenVR::__IVRCompositor___SuspendRendering*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___SuspendRendering*, 0x100>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___SuspendRendering*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___SuspendRendering* OVR::OpenVR::IVRCompositor::__get_SuspendRendering()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SuspendRendering*, 0x100>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___SuspendRendering*> OVR::OpenVR::IVRCompositor::__get_SuspendRendering() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SuspendRendering*, 0x100>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetMirrorTextureD3D11(::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*, 0x108>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11* OVR::OpenVR::IVRCompositor::__get_GetMirrorTextureD3D11()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*, 0x108>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*> OVR::OpenVR::IVRCompositor::__get_GetMirrorTextureD3D11() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*, 0x108>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ReleaseMirrorTextureD3D11(::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*, 0x110>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11* OVR::OpenVR::IVRCompositor::__get_ReleaseMirrorTextureD3D11()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*, 0x110>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*> OVR::OpenVR::IVRCompositor::__get_ReleaseMirrorTextureD3D11() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*, 0x110>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetMirrorTextureGL(::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*, 0x118>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL* OVR::OpenVR::IVRCompositor::__get_GetMirrorTextureGL()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*, 0x118>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*> OVR::OpenVR::IVRCompositor::__get_GetMirrorTextureGL() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*, 0x118>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_ReleaseSharedGLTexture(::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*, 0x120>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture* OVR::OpenVR::IVRCompositor::__get_ReleaseSharedGLTexture()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*, 0x120>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*> OVR::OpenVR::IVRCompositor::__get_ReleaseSharedGLTexture() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*, 0x120>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_LockGLSharedTextureForAccess(::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*, 0x128>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess* OVR::OpenVR::IVRCompositor::__get_LockGLSharedTextureForAccess()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*, 0x128>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*> OVR::OpenVR::IVRCompositor::__get_LockGLSharedTextureForAccess() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*, 0x128>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_UnlockGLSharedTextureForAccess(::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*, 0x130>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess* OVR::OpenVR::IVRCompositor::__get_UnlockGLSharedTextureForAccess()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*, 0x130>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*> OVR::OpenVR::IVRCompositor::__get_UnlockGLSharedTextureForAccess() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*, 0x130>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetVulkanInstanceExtensionsRequired(::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired* OVR::OpenVR::IVRCompositor::__get_GetVulkanInstanceExtensionsRequired()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*> OVR::OpenVR::IVRCompositor::__get_GetVulkanInstanceExtensionsRequired() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_GetVulkanDeviceExtensionsRequired(::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*, 0x140>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired* OVR::OpenVR::IVRCompositor::__get_GetVulkanDeviceExtensionsRequired()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*, 0x140>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*> OVR::OpenVR::IVRCompositor::__get_GetVulkanDeviceExtensionsRequired() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*, 0x140>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SetExplicitTimingMode(::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode* OVR::OpenVR::IVRCompositor::__get_SetExplicitTimingMode()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*> OVR::OpenVR::IVRCompositor::__get_SetExplicitTimingMode() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRCompositor::__set_SubmitExplicitTimingData(::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*, 0x150>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*>(value));
}
constexpr ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData* OVR::OpenVR::IVRCompositor::__get_SubmitExplicitTimingData()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*, 0x150>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*> OVR::OpenVR::IVRCompositor::__get_SubmitExplicitTimingData() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*, 0x150>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "SetTrackingSpace", ty: "::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetTrackingSpace", ty: "::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "WaitGetPoses", ty: "::OVR::OpenVR::__IVRCompositor___WaitGetPoses*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetLastPoses", ty: "::OVR::OpenVR::__IVRCompositor___GetLastPoses*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetLastPoseForTrackedDeviceIndex", ty: "::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "Submit", ty: "::OVR::OpenVR::__IVRCompositor___Submit*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ClearLastSubmittedFrame", ty: "::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "PostPresentHandoff", ty: "::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetFrameTiming", ty: "::OVR::OpenVR::__IVRCompositor___GetFrameTiming*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetFrameTimings", ty: "::OVR::OpenVR::__IVRCompositor___GetFrameTimings*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetFrameTimeRemaining", ty: "::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCumulativeStats", ty: "::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "FadeToColor", ty: "::OVR::OpenVR::__IVRCompositor___FadeToColor*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCurrentFadeColor", ty: "::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "FadeGrid", ty: "::OVR::OpenVR::__IVRCompositor___FadeGrid*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCurrentGridAlpha", ty: "::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetSkyboxOverride", ty: "::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ClearSkyboxOverride", ty: "::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CompositorBringToFront", ty: "::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CompositorGoToBack", ty: "::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CompositorQuit", ty: "::OVR::OpenVR::__IVRCompositor___CompositorQuit*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsFullscreen", ty: "::OVR::OpenVR::__IVRCompositor___IsFullscreen*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetCurrentSceneFocusProcess", ty: "::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetLastFrameRenderer", ty: "::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CanRenderScene", ty: "::OVR::OpenVR::__IVRCompositor___CanRenderScene*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShowMirrorWindow", ty: "::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "HideMirrorWindow", ty: "::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "IsMirrorWindowVisible", ty: "::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "CompositorDumpImages", ty: "::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ShouldAppRenderWithLowResources", ty: "::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ForceInterleavedReprojectionOn", ty: "::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ForceReconnectProcess", ty: "::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SuspendRendering", ty: "::OVR::OpenVR::__IVRCompositor___SuspendRendering*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetMirrorTextureD3D11", ty: "::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ReleaseMirrorTextureD3D11", ty: "::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetMirrorTextureGL", ty: "::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "ReleaseSharedGLTexture", ty: "::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "LockGLSharedTextureForAccess", ty: "::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "UnlockGLSharedTextureForAccess", ty: "::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetVulkanInstanceExtensionsRequired", ty: "::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "GetVulkanDeviceExtensionsRequired", ty: "::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SetExplicitTimingMode", ty: "::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "SubmitExplicitTimingData", ty: "::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*", modifiers: "", def_value: Some("csnull") }]
constexpr ::OVR::OpenVR::IVRCompositor::IVRCompositor(::OVR::OpenVR::__IVRCompositor___SetTrackingSpace*  SetTrackingSpace, ::OVR::OpenVR::__IVRCompositor___GetTrackingSpace*  GetTrackingSpace, ::OVR::OpenVR::__IVRCompositor___WaitGetPoses*  WaitGetPoses, ::OVR::OpenVR::__IVRCompositor___GetLastPoses*  GetLastPoses, ::OVR::OpenVR::__IVRCompositor___GetLastPoseForTrackedDeviceIndex*  GetLastPoseForTrackedDeviceIndex, ::OVR::OpenVR::__IVRCompositor___Submit*  Submit, ::OVR::OpenVR::__IVRCompositor___ClearLastSubmittedFrame*  ClearLastSubmittedFrame, ::OVR::OpenVR::__IVRCompositor___PostPresentHandoff*  PostPresentHandoff, ::OVR::OpenVR::__IVRCompositor___GetFrameTiming*  GetFrameTiming, ::OVR::OpenVR::__IVRCompositor___GetFrameTimings*  GetFrameTimings, ::OVR::OpenVR::__IVRCompositor___GetFrameTimeRemaining*  GetFrameTimeRemaining, ::OVR::OpenVR::__IVRCompositor___GetCumulativeStats*  GetCumulativeStats, ::OVR::OpenVR::__IVRCompositor___FadeToColor*  FadeToColor, ::OVR::OpenVR::__IVRCompositor___GetCurrentFadeColor*  GetCurrentFadeColor, ::OVR::OpenVR::__IVRCompositor___FadeGrid*  FadeGrid, ::OVR::OpenVR::__IVRCompositor___GetCurrentGridAlpha*  GetCurrentGridAlpha, ::OVR::OpenVR::__IVRCompositor___SetSkyboxOverride*  SetSkyboxOverride, ::OVR::OpenVR::__IVRCompositor___ClearSkyboxOverride*  ClearSkyboxOverride, ::OVR::OpenVR::__IVRCompositor___CompositorBringToFront*  CompositorBringToFront, ::OVR::OpenVR::__IVRCompositor___CompositorGoToBack*  CompositorGoToBack, ::OVR::OpenVR::__IVRCompositor___CompositorQuit*  CompositorQuit, ::OVR::OpenVR::__IVRCompositor___IsFullscreen*  IsFullscreen, ::OVR::OpenVR::__IVRCompositor___GetCurrentSceneFocusProcess*  GetCurrentSceneFocusProcess, ::OVR::OpenVR::__IVRCompositor___GetLastFrameRenderer*  GetLastFrameRenderer, ::OVR::OpenVR::__IVRCompositor___CanRenderScene*  CanRenderScene, ::OVR::OpenVR::__IVRCompositor___ShowMirrorWindow*  ShowMirrorWindow, ::OVR::OpenVR::__IVRCompositor___HideMirrorWindow*  HideMirrorWindow, ::OVR::OpenVR::__IVRCompositor___IsMirrorWindowVisible*  IsMirrorWindowVisible, ::OVR::OpenVR::__IVRCompositor___CompositorDumpImages*  CompositorDumpImages, ::OVR::OpenVR::__IVRCompositor___ShouldAppRenderWithLowResources*  ShouldAppRenderWithLowResources, ::OVR::OpenVR::__IVRCompositor___ForceInterleavedReprojectionOn*  ForceInterleavedReprojectionOn, ::OVR::OpenVR::__IVRCompositor___ForceReconnectProcess*  ForceReconnectProcess, ::OVR::OpenVR::__IVRCompositor___SuspendRendering*  SuspendRendering, ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureD3D11*  GetMirrorTextureD3D11, ::OVR::OpenVR::__IVRCompositor___ReleaseMirrorTextureD3D11*  ReleaseMirrorTextureD3D11, ::OVR::OpenVR::__IVRCompositor___GetMirrorTextureGL*  GetMirrorTextureGL, ::OVR::OpenVR::__IVRCompositor___ReleaseSharedGLTexture*  ReleaseSharedGLTexture, ::OVR::OpenVR::__IVRCompositor___LockGLSharedTextureForAccess*  LockGLSharedTextureForAccess, ::OVR::OpenVR::__IVRCompositor___UnlockGLSharedTextureForAccess*  UnlockGLSharedTextureForAccess, ::OVR::OpenVR::__IVRCompositor___GetVulkanInstanceExtensionsRequired*  GetVulkanInstanceExtensionsRequired, ::OVR::OpenVR::__IVRCompositor___GetVulkanDeviceExtensionsRequired*  GetVulkanDeviceExtensionsRequired, ::OVR::OpenVR::__IVRCompositor___SetExplicitTimingMode*  SetExplicitTimingMode, ::OVR::OpenVR::__IVRCompositor___SubmitExplicitTimingData*  SubmitExplicitTimingData) noexcept : ::bs_hook::ValueTypeWrapper<0x158>() {this->SetTrackingSpace = SetTrackingSpace;
this->GetTrackingSpace = GetTrackingSpace;
this->WaitGetPoses = WaitGetPoses;
this->GetLastPoses = GetLastPoses;
this->GetLastPoseForTrackedDeviceIndex = GetLastPoseForTrackedDeviceIndex;
this->Submit = Submit;
this->ClearLastSubmittedFrame = ClearLastSubmittedFrame;
this->PostPresentHandoff = PostPresentHandoff;
this->GetFrameTiming = GetFrameTiming;
this->GetFrameTimings = GetFrameTimings;
this->GetFrameTimeRemaining = GetFrameTimeRemaining;
this->GetCumulativeStats = GetCumulativeStats;
this->FadeToColor = FadeToColor;
this->GetCurrentFadeColor = GetCurrentFadeColor;
this->FadeGrid = FadeGrid;
this->GetCurrentGridAlpha = GetCurrentGridAlpha;
this->SetSkyboxOverride = SetSkyboxOverride;
this->ClearSkyboxOverride = ClearSkyboxOverride;
this->CompositorBringToFront = CompositorBringToFront;
this->CompositorGoToBack = CompositorGoToBack;
this->CompositorQuit = CompositorQuit;
this->IsFullscreen = IsFullscreen;
this->GetCurrentSceneFocusProcess = GetCurrentSceneFocusProcess;
this->GetLastFrameRenderer = GetLastFrameRenderer;
this->CanRenderScene = CanRenderScene;
this->ShowMirrorWindow = ShowMirrorWindow;
this->HideMirrorWindow = HideMirrorWindow;
this->IsMirrorWindowVisible = IsMirrorWindowVisible;
this->CompositorDumpImages = CompositorDumpImages;
this->ShouldAppRenderWithLowResources = ShouldAppRenderWithLowResources;
this->ForceInterleavedReprojectionOn = ForceInterleavedReprojectionOn;
this->ForceReconnectProcess = ForceReconnectProcess;
this->SuspendRendering = SuspendRendering;
this->GetMirrorTextureD3D11 = GetMirrorTextureD3D11;
this->ReleaseMirrorTextureD3D11 = ReleaseMirrorTextureD3D11;
this->GetMirrorTextureGL = GetMirrorTextureGL;
this->ReleaseSharedGLTexture = ReleaseSharedGLTexture;
this->LockGLSharedTextureForAccess = LockGLSharedTextureForAccess;
this->UnlockGLSharedTextureForAccess = UnlockGLSharedTextureForAccess;
this->GetVulkanInstanceExtensionsRequired = GetVulkanInstanceExtensionsRequired;
this->GetVulkanDeviceExtensionsRequired = GetVulkanDeviceExtensionsRequired;
this->SetExplicitTimingMode = SetExplicitTimingMode;
this->SubmitExplicitTimingData = SubmitExplicitTimingData;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
