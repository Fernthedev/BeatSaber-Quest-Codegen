#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobRanges_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__JobsUtility_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Jobs/LowLevel/Unsafe/zzzz__ScheduleMode_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::*)(::cordl_internals::Ptr<void>, ::cordl_internals::intptr_t, ::Unity::Jobs::JobHandle, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode)>(&::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c9de84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__set_Dependency(::Unity::Jobs::JobHandle  value)  {
::cordl_internals::setInstanceField<::Unity::Jobs::JobHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Unity::Jobs::JobHandle>(value));
}
constexpr ::Unity::Jobs::JobHandle& Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__get_Dependency()  {
return ::cordl_internals::getInstanceField<::Unity::Jobs::JobHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Unity::Jobs::JobHandle const& Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__get_Dependency() const {
return ::cordl_internals::getInstanceField<::Unity::Jobs::JobHandle, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__set_ScheduleMode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__get_ScheduleMode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__get_ScheduleMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__set_ReflectionData(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__get_ReflectionData()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__get_ReflectionData() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__set_JobDataPtr(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__get_JobDataPtr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::intptr_t const& Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__get_JobDataPtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::_ctor(::cordl_internals::Ptr<void>  i_jobData, ::cordl_internals::intptr_t  i_reflectionData, ::Unity::Jobs::JobHandle  i_dependency, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  i_scheduleMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::LowLevel::Unsafe::ScheduleMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, i_jobData, i_reflectionData, i_dependency, i_scheduleMode);
}
// Ctor Parameters [CppParam { name: "Dependency", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "ScheduleMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ReflectionData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "JobDataPtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters::__JobsUtility__JobScheduleParameters(::Unity::Jobs::JobHandle  Dependency, int32_t  ScheduleMode, ::cordl_internals::intptr_t  ReflectionData, ::cordl_internals::intptr_t  JobDataPtr) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->Dependency = Dependency;
this->ScheduleMode = ScheduleMode;
this->ReflectionData = ReflectionData;
this->JobDataPtr = JobDataPtr;
}
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c9debc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_::*)()>(&::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c9df78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_* Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*>(object, method));
}
inline void Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_::Invoke()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.GetWorkStealingRange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>, int32_t, ByRef<int32_t>, ByRef<int32_t>)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetWorkStealingRange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c9db98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "GetWorkStealingRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.Schedule
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c9dbf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "Schedule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelFor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>, int32_t, int32_t)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c9dc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "ScheduleParallelFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::System::Type*, ::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c9dd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "CreateJobReflectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.CreateJobReflectionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)(::System::Type*, ::System::Object*, ::System::Object*, ::System::Object*)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c9ddc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "CreateJobReflectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.InvokePanicFunction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::InvokePanicFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c9de20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "InvokePanicFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.Schedule_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>, ByRef<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c9dc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "Schedule_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::LowLevel::Unsafe::JobsUtility.ScheduleParallelFor_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>, int32_t, int32_t, ByRef<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c9dcf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "ScheduleParallelFor_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::setStaticF_PanicFunction(::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*  value)  {
::cordl_internals::setStaticField<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*, "PanicFunction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get>(std::forward<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*>(value));
}
inline ::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_* Unity::Jobs::LowLevel::Unsafe::JobsUtility::getStaticF_PanicFunction()  {
return ::cordl_internals::getStaticField<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__PanicFunction_*, "PanicFunction", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get>();
}
inline bool Unity::Jobs::LowLevel::Unsafe::JobsUtility::GetWorkStealingRange(ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex, ByRef<int32_t>  beginIndex, ByRef<int32_t>  endIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "GetWorkStealingRange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::JobRanges>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ranges, jobIndex, beginIndex, endIndex);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "Schedule",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, parameters);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>  parameters, int32_t  arrayLength, int32_t  innerloopBatchCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "ScheduleParallelFor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, parameters, arrayLength, innerloopBatchCount);
}
inline ::cordl_internals::intptr_t Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(::System::Type*  wrapperJobType, ::System::Type*  userJobType, ::System::Object*  managedJobFunction0, ::System::Object*  managedJobFunction1, ::System::Object*  managedJobFunction2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "CreateJobReflectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, wrapperJobType, userJobType, managedJobFunction0, managedJobFunction1, managedJobFunction2);
}
/// @param managedJobFunction1: ::System::Object* (default: csnull)
/// @param managedJobFunction2: ::System::Object* (default: csnull)
inline ::cordl_internals::intptr_t Unity::Jobs::LowLevel::Unsafe::JobsUtility::CreateJobReflectionData(::System::Type*  type, ::System::Object*  managedJobFunction0, ::System::Object*  managedJobFunction1, ::System::Object*  managedJobFunction2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "CreateJobReflectionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method, type, managedJobFunction0, managedJobFunction1, managedJobFunction2);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::InvokePanicFunction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "InvokePanicFunction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::Schedule_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>  parameters, ByRef<::Unity::Jobs::JobHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "Schedule_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parameters, ret);
}
inline void Unity::Jobs::LowLevel::Unsafe::JobsUtility::ScheduleParallelFor_Injected(ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>  parameters, int32_t  arrayLength, int32_t  innerloopBatchCount, ByRef<::Unity::Jobs::JobHandle>  ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::LowLevel::Unsafe::JobsUtility*>::get(),
                            "ScheduleParallelFor_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::LowLevel::Unsafe::__JobsUtility__JobScheduleParameters>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Jobs::JobHandle>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parameters, arrayLength, innerloopBatchCount, ret);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
