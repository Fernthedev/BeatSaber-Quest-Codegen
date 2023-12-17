#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/zzzz__CaseInsensitiveComparer_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::CaseInsensitiveComparer::*)()>(&::System::Collections::CaseInsensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x257dd5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Collections::CaseInsensitiveComparer::*)(::System::Globalization::CultureInfo*)>(&::System::Collections::CaseInsensitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x257ddd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Collections::CaseInsensitiveComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::CaseInsensitiveComparer::*)(::System::Object*, ::System::Object*)>(&::System::Collections::CaseInsensitiveComparer::Compare)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x257de5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr  System::Collections::CaseInsensitiveComparer::operator ::System::Collections::IComparer*() noexcept {
return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
constexpr void System::Collections::CaseInsensitiveComparer::__set__compareInfo(::System::Globalization::CompareInfo*  value)  {
::cordl_internals::setInstanceField<::System::Globalization::CompareInfo*, 0x10>(this, std::forward<::System::Globalization::CompareInfo*>(value));
}
constexpr ::System::Globalization::CompareInfo* System::Collections::CaseInsensitiveComparer::__get__compareInfo()  {
return ::cordl_internals::getInstanceField<::System::Globalization::CompareInfo*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> System::Collections::CaseInsensitiveComparer::__get__compareInfo() const {
return ::cordl_internals::getInstanceField<::System::Globalization::CompareInfo*, 0x10>(this);
}
inline ::System::Collections::CaseInsensitiveComparer* System::Collections::CaseInsensitiveComparer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::CaseInsensitiveComparer*>());
}
inline void System::Collections::CaseInsensitiveComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::CaseInsensitiveComparer* System::Collections::CaseInsensitiveComparer::New_ctor(::System::Globalization::CultureInfo*  culture)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::CaseInsensitiveComparer*>(culture));
}
inline void System::Collections::CaseInsensitiveComparer::_ctor(::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, culture);
}
inline int32_t System::Collections::CaseInsensitiveComparer::Compare(::System::Object*  a, ::System::Object*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::CaseInsensitiveComparer*>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, a, b);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
