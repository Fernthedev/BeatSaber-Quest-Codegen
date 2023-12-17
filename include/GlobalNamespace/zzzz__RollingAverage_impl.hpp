#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RollingAverage.get_currentAverage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::RollingAverage::*)()>(&::GlobalNamespace::RollingAverage::get_currentAverage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe54598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            "get_currentAverage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RollingAverage.get_hasValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RollingAverage::*)()>(&::GlobalNamespace::RollingAverage::get_hasValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe545a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RollingAverage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RollingAverage::*)(int32_t)>(&::GlobalNamespace::RollingAverage::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe545b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RollingAverage.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RollingAverage::*)(float_t)>(&::GlobalNamespace::RollingAverage::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xe54618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RollingAverage.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RollingAverage::*)()>(&::GlobalNamespace::RollingAverage::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe54738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RollingAverage::__set__currentTotal(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::RollingAverage::__get__currentTotal()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& GlobalNamespace::RollingAverage::__get__currentTotal() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void GlobalNamespace::RollingAverage::__set__currentAverage(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RollingAverage::__get__currentAverage()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::RollingAverage::__get__currentAverage() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::RollingAverage::__set__buffer(::ArrayW<int64_t,::Array<int64_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x20>(this, std::forward<::ArrayW<int64_t,::Array<int64_t>*>>(value));
}
constexpr ::ArrayW<int64_t,::Array<int64_t>*>& GlobalNamespace::RollingAverage::__get__buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& GlobalNamespace::RollingAverage::__get__buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x20>(this);
}
constexpr void GlobalNamespace::RollingAverage::__set__index(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::RollingAverage::__get__index()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& GlobalNamespace::RollingAverage::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void GlobalNamespace::RollingAverage::__set__length(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::RollingAverage::__get__length()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& GlobalNamespace::RollingAverage::__get__length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
inline float_t GlobalNamespace::RollingAverage::get_currentAverage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            "get_currentAverage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::RollingAverage::get_hasValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            "get_hasValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::RollingAverage* GlobalNamespace::RollingAverage::New_ctor(int32_t  window)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RollingAverage*>(window));
}
inline void GlobalNamespace::RollingAverage::_ctor(int32_t  window)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, window);
}
inline void GlobalNamespace::RollingAverage::Update(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::RollingAverage::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RollingAverage*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
