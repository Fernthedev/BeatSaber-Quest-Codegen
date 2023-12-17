#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/Threading/zzzz__ReaderWriterCount_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/zzzz__LockRecursionPolicy_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
//  Writing Method size for method: ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__ReaderWriterLockSlim__TimeoutTracker::*)(int32_t)>(&::System::Threading::__ReaderWriterLockSlim__TimeoutTracker::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x28141f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker.get_RemainingMilliseconds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::__ReaderWriterLockSlim__TimeoutTracker::*)()>(&::System::Threading::__ReaderWriterLockSlim__TimeoutTracker::get_RemainingMilliseconds)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2815e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get(),
                            "get_RemainingMilliseconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker.get_IsExpired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::__ReaderWriterLockSlim__TimeoutTracker::*)()>(&::System::Threading::__ReaderWriterLockSlim__TimeoutTracker::get_IsExpired)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x281499c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get(),
                            "get_IsExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::__ReaderWriterLockSlim__TimeoutTracker::__set_m_total(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::__ReaderWriterLockSlim__TimeoutTracker::__get_m_total()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::__ReaderWriterLockSlim__TimeoutTracker::__get_m_total() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Threading::__ReaderWriterLockSlim__TimeoutTracker::__set_m_start(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::__ReaderWriterLockSlim__TimeoutTracker::__get_m_start()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Threading::__ReaderWriterLockSlim__TimeoutTracker::__get_m_start() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Threading::__ReaderWriterLockSlim__TimeoutTracker::_ctor(int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, millisecondsTimeout);
}
inline int32_t System::Threading::__ReaderWriterLockSlim__TimeoutTracker::get_RemainingMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get(),
                            "get_RemainingMilliseconds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool System::Threading::__ReaderWriterLockSlim__TimeoutTracker::get_IsExpired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get(),
                            "get_IsExpired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_total", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_start", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker::__ReaderWriterLockSlim__TimeoutTracker(int32_t  m_total, int32_t  m_start) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->m_total = m_total;
this->m_start = m_start;
}
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.InitializeThreadCounts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::InitializeThreadCounts)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2813fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "InitializeThreadCounts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::LockRecursionPolicy)>(&::System::Threading::ReaderWriterLockSlim::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2813fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LockRecursionPolicy>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.IsRWEntryEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::ReaderWriterCount*)>(&::System::Threading::ReaderWriterLockSlim::IsRWEntryEmpty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2814034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "IsRWEntryEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterCount*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.IsRwHashEntryChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::ReaderWriterCount*)>(&::System::Threading::ReaderWriterLockSlim::IsRwHashEntryChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2814074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "IsRwHashEntryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterCount*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.GetThreadRWCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ReaderWriterCount* (::System::Threading::ReaderWriterLockSlim::*)(bool)>(&::System::Threading::ReaderWriterLockSlim::GetThreadRWCount)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2814098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "GetThreadRWCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterReadLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28141c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(int32_t)>(&::System::Threading::ReaderWriterLockSlim::TryEnterReadLock)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28141cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker)>(&::System::Threading::ReaderWriterLockSlim::TryEnterReadLock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2814280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterReadLockCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker)>(&::System::Threading::ReaderWriterLockSlim::TryEnterReadLockCore)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x2814284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterReadLockCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterWriteLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterWriteLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2814c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterWriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterWriteLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(int32_t)>(&::System::Threading::ReaderWriterLockSlim::TryEnterWriteLock)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2814c7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterWriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterWriteLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker)>(&::System::Threading::ReaderWriterLockSlim::TryEnterWriteLock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2814ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterWriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterWriteLockCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker)>(&::System::Threading::ReaderWriterLockSlim::TryEnterWriteLockCore)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x2814cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterWriteLockCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterUpgradeableReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterUpgradeableReadLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2815340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterUpgradeableReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterUpgradeableReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(int32_t)>(&::System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLock)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2815348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterUpgradeableReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterUpgradeableReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker)>(&::System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2815374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterUpgradeableReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterUpgradeableReadLockCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker)>(&::System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLockCore)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x2815378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterUpgradeableReadLockCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitReadLock)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x281587c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitWriteLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitWriteLock)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2815a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitWriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitUpgradeableReadLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitUpgradeableReadLock)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2815c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitUpgradeableReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.LazyCreateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)(ByRef<::System::Threading::EventWaitHandle*>, bool)>(&::System::Threading::ReaderWriterLockSlim::LazyCreateEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2814a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "LazyCreateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::EventWaitHandle*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.WaitOnEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::EventWaitHandle*, ByRef<uint32_t>, ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker, bool)>(&::System::Threading::ReaderWriterLockSlim::WaitOnEvent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2814b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "WaitOnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::EventWaitHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitAndWakeUpAppropriateWaiters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x28159e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitAndWakeUpAppropriateWaiters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitAndWakeUpAppropriateWaitersPreferringWriters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaitersPreferringWriters)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2815e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitAndWakeUpAppropriateWaitersPreferringWriters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitAndWakeUpAppropriateReadWaiters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateReadWaiters)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2815ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitAndWakeUpAppropriateReadWaiters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.IsWriterAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::IsWriterAcquired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2815314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "IsWriterAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.SetWriterAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::SetWriterAcquired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2815324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "SetWriterAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ClearWriterAcquired
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ClearWriterAcquired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2815c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ClearWriterAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.SetWritersWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::SetWritersWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2815dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "SetWritersWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ClearWritersWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ClearWritersWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2815f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ClearWritersWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.SetUpgraderWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::SetUpgraderWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2815dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "SetUpgraderWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ClearUpgraderWaiting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ClearUpgraderWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2815f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ClearUpgraderWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.GetNumReaders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::GetNumReaders)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2815334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "GetNumReaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterMyLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterMyLock)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2815f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterMyLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterMyLockSpin
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterMyLockSpin)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2815fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterMyLockSpin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitMyLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitMyLock)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2814984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitMyLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.SpinWait
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Threading::ReaderWriterLockSlim::SpinWait)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x28149b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "SpinWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)(bool)>(&::System::Threading::ReaderWriterLockSlim::Dispose)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x28160a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_IsReadLockHeld
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_IsReadLockHeld)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28161e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_IsReadLockHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_IsUpgradeableReadLockHeld
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x28161f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_IsUpgradeableReadLockHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_IsWriteLockHeld
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_IsWriteLockHeld)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2816210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_IsWriteLockHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_RecursiveReadCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_RecursiveReadCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2816228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_RecursiveReadCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_RecursiveUpgradeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_RecursiveUpgradeCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x28162a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_RecursiveUpgradeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_RecursiveWriteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_RecursiveWriteCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2816358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_RecursiveWriteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_WaitingReadCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_WaitingReadCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_WaitingReadCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_WaitingUpgradeCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_WaitingUpgradeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_WaitingUpgradeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_WaitingWriteCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::get_WaitingWriteCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2816418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_WaitingWriteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Threading::ReaderWriterLockSlim::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_fIsReentrant(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::ReaderWriterLockSlim::__get_fIsReentrant()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Threading::ReaderWriterLockSlim::__get_fIsReentrant() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_myLock(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::ReaderWriterLockSlim::__get_myLock()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Threading::ReaderWriterLockSlim::__get_myLock() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_numWriteWaiters(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__get_numWriteWaiters()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this);
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__get_numWriteWaiters() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_numReadWaiters(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x1c>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__get_numReadWaiters()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__get_numReadWaiters() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x1c>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_numWriteUpgradeWaiters(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__get_numWriteUpgradeWaiters()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this);
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__get_numWriteUpgradeWaiters() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_numUpgradeWaiters(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x24>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__get_numUpgradeWaiters()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x24>(this);
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__get_numUpgradeWaiters() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x24>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_fNoWaiters(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::ReaderWriterLockSlim::__get_fNoWaiters()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& System::Threading::ReaderWriterLockSlim::__get_fNoWaiters() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_upgradeLockOwnerId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::ReaderWriterLockSlim::__get_upgradeLockOwnerId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& System::Threading::ReaderWriterLockSlim::__get_upgradeLockOwnerId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_writeLockOwnerId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::ReaderWriterLockSlim::__get_writeLockOwnerId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& System::Threading::ReaderWriterLockSlim::__get_writeLockOwnerId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_writeEvent(::System::Threading::EventWaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::EventWaitHandle*, 0x38>(this, std::forward<::System::Threading::EventWaitHandle*>(value));
}
constexpr ::System::Threading::EventWaitHandle* System::Threading::ReaderWriterLockSlim::__get_writeEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::EventWaitHandle*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> System::Threading::ReaderWriterLockSlim::__get_writeEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::EventWaitHandle*, 0x38>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_readEvent(::System::Threading::EventWaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::EventWaitHandle*, 0x40>(this, std::forward<::System::Threading::EventWaitHandle*>(value));
}
constexpr ::System::Threading::EventWaitHandle* System::Threading::ReaderWriterLockSlim::__get_readEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::EventWaitHandle*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> System::Threading::ReaderWriterLockSlim::__get_readEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::EventWaitHandle*, 0x40>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_upgradeEvent(::System::Threading::EventWaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::EventWaitHandle*, 0x48>(this, std::forward<::System::Threading::EventWaitHandle*>(value));
}
constexpr ::System::Threading::EventWaitHandle* System::Threading::ReaderWriterLockSlim::__get_upgradeEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::EventWaitHandle*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> System::Threading::ReaderWriterLockSlim::__get_upgradeEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::EventWaitHandle*, 0x48>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_waitUpgradeEvent(::System::Threading::EventWaitHandle*  value)  {
::cordl_internals::setInstanceField<::System::Threading::EventWaitHandle*, 0x50>(this, std::forward<::System::Threading::EventWaitHandle*>(value));
}
constexpr ::System::Threading::EventWaitHandle* System::Threading::ReaderWriterLockSlim::__get_waitUpgradeEvent()  {
return ::cordl_internals::getInstanceField<::System::Threading::EventWaitHandle*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::EventWaitHandle*> System::Threading::ReaderWriterLockSlim::__get_waitUpgradeEvent() const {
return ::cordl_internals::getInstanceField<::System::Threading::EventWaitHandle*, 0x50>(this);
}
inline void System::Threading::ReaderWriterLockSlim::setStaticF_s_nextLockID(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "s_nextLockID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get>(std::forward<int64_t>(value));
}
inline int64_t System::Threading::ReaderWriterLockSlim::getStaticF_s_nextLockID()  {
return ::cordl_internals::getStaticField<int64_t, "s_nextLockID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get>();
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_lockID(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x58>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Threading::ReaderWriterLockSlim::__get_lockID()  {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
constexpr int64_t const& System::Threading::ReaderWriterLockSlim::__get_lockID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x58>(this);
}
inline void System::Threading::ReaderWriterLockSlim::setStaticF_t_rwc(::System::Threading::ReaderWriterCount*  value)  {
::cordl_internals::setStaticField<::System::Threading::ReaderWriterCount*, "t_rwc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get>(std::forward<::System::Threading::ReaderWriterCount*>(value));
}
inline ::System::Threading::ReaderWriterCount* System::Threading::ReaderWriterLockSlim::getStaticF_t_rwc()  {
return ::cordl_internals::getStaticField<::System::Threading::ReaderWriterCount*, "t_rwc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get>();
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_fUpgradeThreadHoldingRead(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::ReaderWriterLockSlim::__get_fUpgradeThreadHoldingRead()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& System::Threading::ReaderWriterLockSlim::__get_fUpgradeThreadHoldingRead() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_owners(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x64>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__get_owners()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x64>(this);
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__get_owners() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x64>(this);
}
constexpr void System::Threading::ReaderWriterLockSlim::__set_fDisposed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& System::Threading::ReaderWriterLockSlim::__get_fDisposed()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& System::Threading::ReaderWriterLockSlim::__get_fDisposed() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
inline void System::Threading::ReaderWriterLockSlim::InitializeThreadCounts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "InitializeThreadCounts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Threading::ReaderWriterLockSlim* System::Threading::ReaderWriterLockSlim::New_ctor(::System::Threading::LockRecursionPolicy  recursionPolicy)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ReaderWriterLockSlim*>(recursionPolicy));
}
inline void System::Threading::ReaderWriterLockSlim::_ctor(::System::Threading::LockRecursionPolicy  recursionPolicy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LockRecursionPolicy>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, recursionPolicy);
}
inline bool System::Threading::ReaderWriterLockSlim::IsRWEntryEmpty(::System::Threading::ReaderWriterCount*  rwc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "IsRWEntryEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterCount*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rwc);
}
inline bool System::Threading::ReaderWriterLockSlim::IsRwHashEntryChanged(::System::Threading::ReaderWriterCount*  lrwc)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "IsRwHashEntryChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterCount*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, lrwc);
}
inline ::System::Threading::ReaderWriterCount* System::Threading::ReaderWriterLockSlim::GetThreadRWCount(bool  dontAllocate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "GetThreadRWCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::ReaderWriterCount*, false>(*this, ___internal_method, dontAllocate);
}
inline void System::Threading::ReaderWriterLockSlim::EnterReadLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterReadLock(int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterReadLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker  timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, timeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterReadLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker  timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterReadLockCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, timeout);
}
inline void System::Threading::ReaderWriterLockSlim::EnterWriteLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterWriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterWriteLock(int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterWriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterWriteLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker  timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterWriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, timeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterWriteLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker  timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterWriteLockCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, timeout);
}
inline void System::Threading::ReaderWriterLockSlim::EnterUpgradeableReadLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterUpgradeableReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLock(int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterUpgradeableReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLock(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker  timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterUpgradeableReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, timeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLockCore(::System::Threading::__ReaderWriterLockSlim__TimeoutTracker  timeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "TryEnterUpgradeableReadLockCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, timeout);
}
inline void System::Threading::ReaderWriterLockSlim::ExitReadLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitWriteLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitWriteLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitUpgradeableReadLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitUpgradeableReadLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::LazyCreateEvent(ByRef<::System::Threading::EventWaitHandle*>  waitEvent, bool  makeAutoResetEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "LazyCreateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Threading::EventWaitHandle*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, waitEvent, makeAutoResetEvent);
}
inline bool System::Threading::ReaderWriterLockSlim::WaitOnEvent(::System::Threading::EventWaitHandle*  waitEvent, ByRef<uint32_t>  numWaiters, ::System::Threading::__ReaderWriterLockSlim__TimeoutTracker  timeout, bool  isWriteWaiter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "WaitOnEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::EventWaitHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__ReaderWriterLockSlim__TimeoutTracker>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, waitEvent, numWaiters, timeout, isWriteWaiter);
}
inline void System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitAndWakeUpAppropriateWaiters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaitersPreferringWriters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitAndWakeUpAppropriateWaitersPreferringWriters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateReadWaiters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitAndWakeUpAppropriateReadWaiters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::IsWriterAcquired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "IsWriterAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::SetWriterAcquired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "SetWriterAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ClearWriterAcquired()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ClearWriterAcquired",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::SetWritersWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "SetWritersWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ClearWritersWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ClearWritersWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::SetUpgraderWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "SetUpgraderWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ClearUpgraderWaiting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ClearUpgraderWaiting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline uint32_t System::Threading::ReaderWriterLockSlim::GetNumReaders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "GetNumReaders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::EnterMyLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterMyLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::EnterMyLockSpin()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "EnterMyLockSpin",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitMyLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "ExitMyLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::SpinWait(int32_t  SpinCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "SpinWait",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, SpinCount);
}
inline void System::Threading::ReaderWriterLockSlim::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline bool System::Threading::ReaderWriterLockSlim::get_IsReadLockHeld()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_IsReadLockHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_IsUpgradeableReadLockHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::get_IsWriteLockHeld()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_IsWriteLockHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_RecursiveReadCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_RecursiveReadCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_RecursiveUpgradeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_RecursiveUpgradeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_RecursiveWriteCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_RecursiveWriteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_WaitingReadCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_WaitingReadCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_WaitingUpgradeCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_WaitingUpgradeCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_WaitingWriteCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                            "get_WaitingWriteCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
