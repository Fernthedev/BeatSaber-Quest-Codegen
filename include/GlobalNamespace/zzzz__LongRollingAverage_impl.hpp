#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LongRollingAverage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage.get_currentAverage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::LongRollingAverage::*)()>(&::GlobalNamespace::LongRollingAverage::get_currentAverage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe430f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            "get_currentAverage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LongRollingAverage::*)()>(&::GlobalNamespace::LongRollingAverage::get_hasValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe430fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LongRollingAverage::*)(int32_t)>(&::GlobalNamespace::LongRollingAverage::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe4310c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LongRollingAverage::*)(int64_t)>(&::GlobalNamespace::LongRollingAverage::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xe43174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LongRollingAverage.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LongRollingAverage::*)()>(&::GlobalNamespace::LongRollingAverage::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe4326c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LongRollingAverage::__set__currentTotal(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::LongRollingAverage::__get__currentTotal()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& GlobalNamespace::LongRollingAverage::__get__currentTotal() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void GlobalNamespace::LongRollingAverage::__set__currentAverage(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::LongRollingAverage::__get__currentAverage()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& GlobalNamespace::LongRollingAverage::__get__currentAverage() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr void GlobalNamespace::LongRollingAverage::__set__buffer(::ArrayW<int64_t,::Array<int64_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x20>(this, std::forward<::ArrayW<int64_t,::Array<int64_t>*>>(value));
}
constexpr ::ArrayW<int64_t,::Array<int64_t>*>& GlobalNamespace::LongRollingAverage::__get__buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& GlobalNamespace::LongRollingAverage::__get__buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x20>(this);
}
constexpr void GlobalNamespace::LongRollingAverage::__set__index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LongRollingAverage::__get__index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::LongRollingAverage::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::LongRollingAverage::__set__length(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LongRollingAverage::__get__length()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& GlobalNamespace::LongRollingAverage::__get__length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
inline int64_t GlobalNamespace::LongRollingAverage::get_currentAverage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            "get_currentAverage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::LongRollingAverage::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LongRollingAverage* GlobalNamespace::LongRollingAverage::New_ctor(int32_t  window)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LongRollingAverage*>(window));
}
inline void GlobalNamespace::LongRollingAverage::_ctor(int32_t  window)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, window);
}
inline void GlobalNamespace::LongRollingAverage::Update(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::LongRollingAverage::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LongRollingAverage*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
