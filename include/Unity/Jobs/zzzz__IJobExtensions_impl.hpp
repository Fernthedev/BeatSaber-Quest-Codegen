#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlaneMeshFilter_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneVolumeMeshFilter_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayDisposeJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Jobs/zzzz__IJobExtensions_def.hpp"
/// @param dependsOn: ::Unity::Jobs::JobHandle (default: {})
template<typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobExtensions::Schedule(T  jobData, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobExtensions*>::get(),
                        "Schedule",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobData, dependsOn);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::*)(ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::Invoke(ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::*)(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::Invoke(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::*)(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::Invoke(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::*)(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::Invoke(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::*)(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::Invoke(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::*)(ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::Invoke(ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::*)(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::Invoke(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::*)(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::Invoke(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>::*)(ByRef<::Unity::Collections::NativeArrayDisposeJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>* GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>*>(object, method));
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>::Invoke(ByRef<::Unity::Collections::NativeArrayDisposeJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobExtensions__JobStruct_1__ExecuteJobFunction<::Unity::Collections::NativeArrayDisposeJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArrayDisposeJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>::Execute(ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__GetMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>::Execute(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__PopulateMeshDataJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>::Execute(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>::Execute(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__GetTriangleMeshCountsJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>::Execute(ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRSceneVolumeMeshFilter__BakeMeshJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>::Execute(ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlaneMeshFilter__TriangulateBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>::Execute(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryLengthJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>::Execute(ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRScenePlane__GetBoundaryJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Collections::NativeArrayDisposeJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArrayDisposeJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>>::get>();
}
inline void Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>::Execute(ByRef<::Unity::Collections::NativeArrayDisposeJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobExtensions__JobStruct_1<::Unity::Collections::NativeArrayDisposeJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Collections::NativeArrayDisposeJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
