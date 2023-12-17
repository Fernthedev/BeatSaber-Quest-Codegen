#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForExtensions_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshJobs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughColorLut_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForExtensions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
/// @param dependsOn: ::Unity::Jobs::JobHandle (default: {})
template<typename T>
inline ::Unity::Jobs::JobHandle Unity::Jobs::IJobParallelForExtensions::Schedule(T  jobData, int32_t  arrayLength, int32_t  innerloopBatchCount, ::Unity::Jobs::JobHandle  dependsOn)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::IJobParallelForExtensions*>::get(),
                        "Schedule",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobData, arrayLength, innerloopBatchCount, dependsOn);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::*)(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>* GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>*>(object, method));
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::Invoke(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::*)(ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>* GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>*>(object, method));
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::Invoke(ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::*)(ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>* GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>*>(object, method));
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::Invoke(ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::*)(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>* GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>*>(object, method));
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::Invoke(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::*)(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>* GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>*>(object, method));
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::Invoke(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::*)(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>* GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>*>(object, method));
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::Invoke(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>  data, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IJobParallelForExtensions__ParallelForJobStruct_1__ExecuteJobFunction<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>>::get>();
}
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>::Execute(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPassthroughColorLut__ColorLutTextureConverter__MapColorValuesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>>::get>();
}
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>::Execute(ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__NegateXJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>>::get>();
}
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>::Execute(ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRTriangleMesh__FlipTriangleWindingJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>>::get>();
}
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>::Execute(ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRPassthroughColorLut__WriteColorsAsBytesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>>::get>();
}
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>::Execute(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRMeshJobs__TransformTrianglesJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
//  Writing Method size for method: ::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>.Execute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>, ::cordl_internals::intptr_t, ::cordl_internals::intptr_t, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t)>(&::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::setStaticF_jobReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::getStaticF_jobReflectionData()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "jobReflectionData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>>::get>();
}
inline void Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>::Execute(ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>  jobData, ::cordl_internals::intptr_t  additionalPtr, ::cordl_internals::intptr_t  bufferRangePatchData, ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::__IJobParallelForExtensions__ParallelForJobStruct_1<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__OVRMeshJobs__TransformToUnitySpaceJob>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobData, additionalPtr, bufferRangePatchData, ranges, jobIndex);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
