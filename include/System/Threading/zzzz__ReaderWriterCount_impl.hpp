#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ReaderWriterCount_def.hpp"
//  Writing Method size for method: ::System::Threading::ReaderWriterCount._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterCount::*)()>(&::System::Threading::ReaderWriterCount::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2813f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterCount*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Threading::ReaderWriterCount::__set_lockID(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Threading::ReaderWriterCount::__get_lockID()  {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr int64_t const& System::Threading::ReaderWriterCount::__get_lockID() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this);
}
constexpr void System::Threading::ReaderWriterCount::__set_readercount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::ReaderWriterCount::__get_readercount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__get_readercount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Threading::ReaderWriterCount::__set_writercount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::ReaderWriterCount::__get_writercount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__get_writercount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void System::Threading::ReaderWriterCount::__set_upgradecount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Threading::ReaderWriterCount::__get_upgradecount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Threading::ReaderWriterCount::__get_upgradecount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void System::Threading::ReaderWriterCount::__set_next(::System::Threading::ReaderWriterCount*  value)  {
::cordl_internals::setInstanceField<::System::Threading::ReaderWriterCount*, 0x28>(this, std::forward<::System::Threading::ReaderWriterCount*>(value));
}
constexpr ::System::Threading::ReaderWriterCount* System::Threading::ReaderWriterCount::__get_next()  {
return ::cordl_internals::getInstanceField<::System::Threading::ReaderWriterCount*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterCount*> System::Threading::ReaderWriterCount::__get_next() const {
return ::cordl_internals::getInstanceField<::System::Threading::ReaderWriterCount*, 0x28>(this);
}
inline ::System::Threading::ReaderWriterCount* System::Threading::ReaderWriterCount::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::ReaderWriterCount*>());
}
inline void System::Threading::ReaderWriterCount::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterCount*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
