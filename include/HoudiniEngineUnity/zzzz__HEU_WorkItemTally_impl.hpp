#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_WorkItemTally_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_WorkItemTally.ZeroAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&::HoudiniEngineUnity::HEU_WorkItemTally::ZeroAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x219b8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "ZeroAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_WorkItemTally.AreAllWorkItemsComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&::HoudiniEngineUnity::HEU_WorkItemTally::AreAllWorkItemsComplete)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x219c9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "AreAllWorkItemsComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_WorkItemTally.AnyWorkItemsFailed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&::HoudiniEngineUnity::HEU_WorkItemTally::AnyWorkItemsFailed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x219c9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "AnyWorkItemsFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_WorkItemTally.AnyWorkItemsPending
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&::HoudiniEngineUnity::HEU_WorkItemTally::AnyWorkItemsPending)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x219ca48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "AnyWorkItemsPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_WorkItemTally.ProgressRatio
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&::HoudiniEngineUnity::HEU_WorkItemTally::ProgressRatio)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x219ca8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "ProgressRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_WorkItemTally._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_WorkItemTally::*)()>(&::HoudiniEngineUnity::HEU_WorkItemTally::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x219c834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_WorkItemTally::__set__totalWorkItems(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_WorkItemTally::__get__totalWorkItems()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_WorkItemTally::__get__totalWorkItems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void HoudiniEngineUnity::HEU_WorkItemTally::__set__waitingWorkItems(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_WorkItemTally::__get__waitingWorkItems()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_WorkItemTally::__get__waitingWorkItems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void HoudiniEngineUnity::HEU_WorkItemTally::__set__scheduledWorkItems(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_WorkItemTally::__get__scheduledWorkItems()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_WorkItemTally::__get__scheduledWorkItems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void HoudiniEngineUnity::HEU_WorkItemTally::__set__cookingWorkItems(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_WorkItemTally::__get__cookingWorkItems()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_WorkItemTally::__get__cookingWorkItems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void HoudiniEngineUnity::HEU_WorkItemTally::__set__cookedWorkItems(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_WorkItemTally::__get__cookedWorkItems()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_WorkItemTally::__get__cookedWorkItems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void HoudiniEngineUnity::HEU_WorkItemTally::__set__erroredWorkItems(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& HoudiniEngineUnity::HEU_WorkItemTally::__get__erroredWorkItems()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& HoudiniEngineUnity::HEU_WorkItemTally::__get__erroredWorkItems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
inline void HoudiniEngineUnity::HEU_WorkItemTally::ZeroAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "ZeroAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_WorkItemTally::AreAllWorkItemsComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "AreAllWorkItemsComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_WorkItemTally::AnyWorkItemsFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "AnyWorkItemsFailed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_WorkItemTally::AnyWorkItemsPending()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "AnyWorkItemsPending",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_WorkItemTally::ProgressRatio()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            "ProgressRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_WorkItemTally* HoudiniEngineUnity::HEU_WorkItemTally::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_WorkItemTally*>());
}
inline void HoudiniEngineUnity::HEU_WorkItemTally::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_WorkItemTally*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
