#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ThreadedTaskLoadGeo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferMesh_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolume_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferInstancer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutput_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GenerateOptions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21a59e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21a59e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.DeleteSessionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::DeleteSessionData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21a59f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.DestroyGeneratedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::DestroyGeneratedData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21a5ac4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::Initialize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21a5d04;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GetHoudiniSession
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (::HoudiniEngineUnity::HEU_BaseSync::*)(bool)>(&::HoudiniEngineUnity::HEU_BaseSync::GetHoudiniSession)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21a5d20;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GetParentNodeID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_BaseSync::GetParentNodeID)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21a5a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GetParentNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.Log
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::StringW)>(&::HoudiniEngineUnity::HEU_BaseSync::Log)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21a5e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.ClearLog
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::ClearLog)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x21a5f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "ClearLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.Error
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::StringW)>(&::HoudiniEngineUnity::HEU_BaseSync::Error)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21a6058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.IsLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::IsLoaded)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21a6074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "IsLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.StartSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::StartSync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x21a6098;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.SetupLoadTask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(&::HoudiniEngineUnity::HEU_BaseSync::SetupLoadTask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21a61c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.StopSync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::StopSync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21a61c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.Resync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::Resync)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21a6238;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.Bake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::Bake)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x21a6274;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.Unload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::Unload)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21a6618;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x21a66ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.OnLoadComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*)>(&::HoudiniEngineUnity::HEU_BaseSync::OnLoadComplete)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21a5644;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GenerateObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*)>(&::HoudiniEngineUnity::HEU_BaseSync::GenerateObjects)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x21a676c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GenerateGeometry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*, int32_t)>(&::HoudiniEngineUnity::HEU_BaseSync::GenerateGeometry)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x21a67f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.OnStopped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*)>(&::HoudiniEngineUnity::HEU_BaseSync::OnStopped)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21a8600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "OnStopped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GenerateTerrain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*)>(&::HoudiniEngineUnity::HEU_BaseSync::GenerateTerrain)> {
  constexpr static std::size_t size = 0x1638;
  constexpr static std::size_t addrs = 0x21a6f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateTerrain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GenerateMesh
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*)>(&::HoudiniEngineUnity::HEU_BaseSync::GenerateMesh)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x21a6900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GenerateAllInstancers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(int32_t, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*)>(&::HoudiniEngineUnity::HEU_BaseSync::GenerateAllInstancers)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21a854c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateAllInstancers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GenerateInstancer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(int32_t, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*)>(&::HoudiniEngineUnity::HEU_BaseSync::GenerateInstancer)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x21a89fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GenerateInstancesFromNodeIDs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(int32_t, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*, ::UnityEngine::Transform*)>(&::HoudiniEngineUnity::HEU_BaseSync::GenerateInstancesFromNodeIDs)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x21a8d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateInstancesFromNodeIDs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GenerateInstancesFromAssetPaths
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::HEU_LoadBufferInstancer*, ::UnityEngine::Transform*)>(&::HoudiniEngineUnity::HEU_BaseSync::GenerateInstancesFromAssetPaths)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x21a944c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateInstancesFromAssetPaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.CreateNewInstanceFromObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::UnityEngine::GameObject*, int32_t, ::UnityEngine::Transform*, ByRef<::HoudiniEngineUnity::HAPI_Transform>, ::ArrayW<::StringW,::Array<::StringW>*>, ::StringW, ::UnityEngine::GameObject*)>(&::HoudiniEngineUnity::HEU_BaseSync::CreateNewInstanceFromObject)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x21a9d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "CreateNewInstanceFromObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.ApplyAttributeModifiersOnGameObjectOutput
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ByRef<::UnityEngine::GameObject*>)>(&::HoudiniEngineUnity::HEU_BaseSync::ApplyAttributeModifiersOnGameObjectOutput)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21a8798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "ApplyAttributeModifiersOnGameObjectOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::GameObject*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.DestroyOutputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::DestroyOutputs)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x21a5ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "DestroyOutputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.SetOutputVisiblity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::HoudiniEngineUnity::HEU_LoadBufferBase*)>(&::HoudiniEngineUnity::HEU_BaseSync::SetOutputVisiblity)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x21a8808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "SetOutputVisiblity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_LoadBufferBase*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.GetOutputCacheDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::GetOutputCacheDirectory)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21a8650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GetOutputCacheDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.SetOutputCacheDirectory
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::StringW)>(&::HoudiniEngineUnity::HEU_BaseSync::SetOutputCacheDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21a9f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "SetOutputCacheDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.AddGeneratedOutputFilePath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)(::StringW)>(&::HoudiniEngineUnity::HEU_BaseSync::AddGeneratedOutputFilePath)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x21a86b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "AddGeneratedOutputFilePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync.SyncUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::SyncUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21a9f64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BaseSync._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BaseSync::*)()>(&::HoudiniEngineUnity::HEU_BaseSync::_ctor)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x21a5704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__cookNodeID(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_BaseSync::__get__cookNodeID()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_BaseSync::__get__cookNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__sessionID(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& HoudiniEngineUnity::HEU_BaseSync::__get__sessionID()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& HoudiniEngineUnity::HEU_BaseSync::__get__sessionID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__nodeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_BaseSync::__get__nodeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_BaseSync::__get__nodeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__initialized(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_BaseSync::__get__initialized()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_BaseSync::__get__initialized() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__syncing(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_BaseSync::__get__syncing()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_BaseSync::__get__syncing() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__deleteParent(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x32>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_BaseSync::__get__deleteParent()  {
return ::cordl_internals::getInstanceField<bool, 0x32>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_BaseSync::__get__deleteParent() const {
return ::cordl_internals::getInstanceField<bool, 0x32>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__generatedOutputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* HoudiniEngineUnity::HEU_BaseSync::__get__generatedOutputs()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*> HoudiniEngineUnity::HEU_BaseSync::__get__generatedOutputs() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*, 0x38>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__outputCacheDirectory(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_BaseSync::__get__outputCacheDirectory()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_BaseSync::__get__outputCacheDirectory() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__outputCacheFilePaths(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x48>(this, std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW>* HoudiniEngineUnity::HEU_BaseSync::__get__outputCacheFilePaths()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> HoudiniEngineUnity::HEU_BaseSync::__get__outputCacheFilePaths() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>*, 0x48>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__generateOptions(::HoudiniEngineUnity::HEU_GenerateOptions  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_GenerateOptions, 0x50>(this, std::forward<::HoudiniEngineUnity::HEU_GenerateOptions>(value));
}
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions& HoudiniEngineUnity::HEU_BaseSync::__get__generateOptions()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GenerateOptions, 0x50>(this);
}
constexpr ::HoudiniEngineUnity::HEU_GenerateOptions const& HoudiniEngineUnity::HEU_BaseSync::__get__generateOptions() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_GenerateOptions, 0x50>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__log(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x58>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* HoudiniEngineUnity::HEU_BaseSync::__get__log()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> HoudiniEngineUnity::HEU_BaseSync::__get__log() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x58>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__error(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x60>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* HoudiniEngineUnity::HEU_BaseSync::__get__error()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> HoudiniEngineUnity::HEU_BaseSync::__get__error() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x60>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__sessionSyncAutoCook(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_BaseSync::__get__sessionSyncAutoCook()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_BaseSync::__get__sessionSyncAutoCook() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__loadTask(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*  value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*, 0x70>(this, std::forward<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*>(value));
}
constexpr ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* HoudiniEngineUnity::HEU_BaseSync::__get__loadTask()  {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*> HoudiniEngineUnity::HEU_BaseSync::__get__loadTask() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*, 0x70>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__totalCookCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_BaseSync::__get__totalCookCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_BaseSync::__get__totalCookCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr void HoudiniEngineUnity::HEU_BaseSync::__set__firstSyncComplete(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::HEU_BaseSync::__get__firstSyncComplete()  {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this);
}
constexpr bool const& HoudiniEngineUnity::HEU_BaseSync::__get__firstSyncComplete() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this);
}
inline void HoudiniEngineUnity::HEU_BaseSync::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::DeleteSessionData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "DeleteSessionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::DestroyGeneratedData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "DestroyGeneratedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_BaseSync::GetHoudiniSession(bool  bCreateIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GetHoudiniSession",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase*, false>(*this, ___internal_method, bCreateIfNotFound);
}
inline int32_t HoudiniEngineUnity::HEU_BaseSync::GetParentNodeID(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GetParentNodeID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_BaseSync::Log(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Log",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, msg);
}
inline void HoudiniEngineUnity::HEU_BaseSync::ClearLog()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "ClearLog",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::Error(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Error",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, error);
}
inline bool HoudiniEngineUnity::HEU_BaseSync::IsLoaded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "IsLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::StartSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "StartSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase*  session)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "SetupLoadTask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_BaseSync::StopSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "StopSync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::Resync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Resync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::Bake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Bake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::Unload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Unload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::OnLoadComplete(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "OnLoadComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, loadData);
}
inline void HoudiniEngineUnity::HEU_BaseSync::GenerateObjects(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, loadData);
}
inline void HoudiniEngineUnity::HEU_BaseSync::GenerateGeometry(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData, int32_t  objIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateGeometry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, loadData, objIndex);
}
inline void HoudiniEngineUnity::HEU_BaseSync::OnStopped(::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "OnStopped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, loadData);
}
inline void HoudiniEngineUnity::HEU_BaseSync::GenerateTerrain(int32_t  cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*  terrainBuffers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateTerrain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolume*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cookNodeId, terrainBuffers);
}
inline void HoudiniEngineUnity::HEU_BaseSync::GenerateMesh(int32_t  cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*  meshBuffers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateMesh",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferMesh*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cookNodeId, meshBuffers);
}
inline void HoudiniEngineUnity::HEU_BaseSync::GenerateAllInstancers(int32_t  cookNodeId, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*  instancerBuffers, ::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*  loadData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateAllInstancers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_ThreadedTaskLoadGeo__HEU_LoadData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cookNodeId, instancerBuffers, loadData);
}
inline void HoudiniEngineUnity::HEU_BaseSync::GenerateInstancer(int32_t  cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*  instancerBuffer, ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*  idBuffersMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateInstancer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cookNodeId, instancerBuffer, idBuffersMap);
}
inline void HoudiniEngineUnity::HEU_BaseSync::GenerateInstancesFromNodeIDs(int32_t  cookNodeId, ::HoudiniEngineUnity::HEU_LoadBufferInstancer*  instancerBuffer, ::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*  idBuffersMap, ::UnityEngine::Transform*  instanceRootTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateInstancesFromNodeIDs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t,::HoudiniEngineUnity::HEU_LoadBufferBase*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cookNodeId, instancerBuffer, idBuffersMap, instanceRootTransform);
}
inline void HoudiniEngineUnity::HEU_BaseSync::GenerateInstancesFromAssetPaths(::HoudiniEngineUnity::HEU_LoadBufferInstancer*  instancerBuffer, ::UnityEngine::Transform*  instanceRootTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GenerateInstancesFromAssetPaths",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_LoadBufferInstancer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, instancerBuffer, instanceRootTransform);
}
inline void HoudiniEngineUnity::HEU_BaseSync::CreateNewInstanceFromObject(::UnityEngine::GameObject*  assetSourceGO, int32_t  instanceIndex, ::UnityEngine::Transform*  parentTransform, ByRef<::HoudiniEngineUnity::HAPI_Transform>  hapiTransform, ::ArrayW<::StringW,::Array<::StringW>*>  instancePrefixes, ::StringW  instanceName, ::UnityEngine::GameObject*  collisionSourceGO)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "CreateNewInstanceFromObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_Transform>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, assetSourceGO, instanceIndex, parentTransform, hapiTransform, instancePrefixes, instanceName, collisionSourceGO);
}
inline void HoudiniEngineUnity::HEU_BaseSync::ApplyAttributeModifiersOnGameObjectOutput(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  geoID, int32_t  partId, ByRef<::UnityEngine::GameObject*>  go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "ApplyAttributeModifiersOnGameObjectOutput",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::GameObject*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, session, geoID, partId, go);
}
inline void HoudiniEngineUnity::HEU_BaseSync::DestroyOutputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "DestroyOutputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::SetOutputVisiblity(::HoudiniEngineUnity::HEU_LoadBufferBase*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "SetOutputVisiblity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_LoadBufferBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer);
}
inline ::StringW HoudiniEngineUnity::HEU_BaseSync::GetOutputCacheDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "GetOutputCacheDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_BaseSync::SetOutputCacheDirectory(::StringW  directory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "SetOutputCacheDirectory",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, directory);
}
inline void HoudiniEngineUnity::HEU_BaseSync::AddGeneratedOutputFilePath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "AddGeneratedOutputFilePath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, path);
}
inline void HoudiniEngineUnity::HEU_BaseSync::SyncUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            "SyncUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_BaseSync* HoudiniEngineUnity::HEU_BaseSync::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_BaseSync*>());
}
inline void HoudiniEngineUnity::HEU_BaseSync::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BaseSync*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
