#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Resources/zzzz__ResourceLocator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/Resources/zzzz__IResourceReader_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Resources/zzzz__ResourceTypeCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryFormatter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Resources/zzzz__ResourceReader_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
//  Writing Method size for method: ::System::Resources::__ResourceReader__ResourceEnumerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::__ResourceReader__ResourceEnumerator::*)(::System::Resources::ResourceReader*)>(&::System::Resources::__ResourceReader__ResourceEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24e2498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceReader*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::__ResourceReader__ResourceEnumerator.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Resources::__ResourceReader__ResourceEnumerator::*)()>(&::System::Resources::__ResourceReader__ResourceEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24e083c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::__ResourceReader__ResourceEnumerator.get_Key
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::__ResourceReader__ResourceEnumerator::*)()>(&::System::Resources::__ResourceReader__ResourceEnumerator::get_Key)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24e0784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::__ResourceReader__ResourceEnumerator.get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::__ResourceReader__ResourceEnumerator::*)()>(&::System::Resources::__ResourceReader__ResourceEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24e50a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::__ResourceReader__ResourceEnumerator.get_DataPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Resources::__ResourceReader__ResourceEnumerator::*)()>(&::System::Resources::__ResourceReader__ResourceEnumerator::get_DataPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e5448;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_DataPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::__ResourceReader__ResourceEnumerator.get_Entry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::DictionaryEntry (::System::Resources::__ResourceReader__ResourceEnumerator::*)()>(&::System::Resources::__ResourceReader__ResourceEnumerator::get_Entry)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x24e5104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::__ResourceReader__ResourceEnumerator.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::__ResourceReader__ResourceEnumerator::*)()>(&::System::Resources::__ResourceReader__ResourceEnumerator::get_Value)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24e5450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::__ResourceReader__ResourceEnumerator.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::__ResourceReader__ResourceEnumerator::*)()>(&::System::Resources::__ResourceReader__ResourceEnumerator::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24e5500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
constexpr  System::Resources::__ResourceReader__ResourceEnumerator::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::Resources::__ResourceReader__ResourceEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr void System::Resources::__ResourceReader__ResourceEnumerator::__set__reader(::System::Resources::ResourceReader*  value)  {
::cordl_internals::setInstanceField<::System::Resources::ResourceReader*, 0x10>(this, std::forward<::System::Resources::ResourceReader*>(value));
}
constexpr ::System::Resources::ResourceReader* System::Resources::__ResourceReader__ResourceEnumerator::__get__reader()  {
return ::cordl_internals::getInstanceField<::System::Resources::ResourceReader*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::ResourceReader*> System::Resources::__ResourceReader__ResourceEnumerator::__get__reader() const {
return ::cordl_internals::getInstanceField<::System::Resources::ResourceReader*, 0x10>(this);
}
constexpr void System::Resources::__ResourceReader__ResourceEnumerator::__set__currentIsValid(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& System::Resources::__ResourceReader__ResourceEnumerator::__get__currentIsValid()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& System::Resources::__ResourceReader__ResourceEnumerator::__get__currentIsValid() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void System::Resources::__ResourceReader__ResourceEnumerator::__set__currentName(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Resources::__ResourceReader__ResourceEnumerator::__get__currentName()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::Resources::__ResourceReader__ResourceEnumerator::__get__currentName() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void System::Resources::__ResourceReader__ResourceEnumerator::__set__dataPosition(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Resources::__ResourceReader__ResourceEnumerator::__get__dataPosition()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& System::Resources::__ResourceReader__ResourceEnumerator::__get__dataPosition() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline ::System::Resources::__ResourceReader__ResourceEnumerator* System::Resources::__ResourceReader__ResourceEnumerator::New_ctor(::System::Resources::ResourceReader*  reader)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::__ResourceReader__ResourceEnumerator*>(reader));
}
inline void System::Resources::__ResourceReader__ResourceEnumerator::_ctor(::System::Resources::ResourceReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::ResourceReader*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reader);
}
inline bool System::Resources::__ResourceReader__ResourceEnumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* System::Resources::__ResourceReader__ResourceEnumerator::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_Key",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Object* System::Resources::__ResourceReader__ResourceEnumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline int32_t System::Resources::__ResourceReader__ResourceEnumerator::get_DataPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_DataPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::DictionaryEntry System::Resources::__ResourceReader__ResourceEnumerator::get_Entry()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_Entry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(*this, ___internal_method);
}
inline ::System::Object* System::Resources::__ResourceReader__ResourceEnumerator::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void System::Resources::__ResourceReader__ResourceEnumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::__ResourceReader__ResourceEnumerator*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Resources::ResourceReader._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)(::System::IO::Stream*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*)>(&::System::Resources::ResourceReader::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x24df0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::Close)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24df3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24e2164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)(bool)>(&::System::Resources::ResourceReader::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24e2124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.ReadUnalignedI4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<int32_t>)>(&::System::Resources::ResourceReader::ReadUnalignedI4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e21a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "ReadUnalignedI4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.SkipString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::SkipString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x24e21a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "SkipString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetNameHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::GetNameHash)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24e2260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetNameHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetNamePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::GetNamePosition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x24e22a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetNamePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24e23c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::GetEnumerator)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x24e23c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetEnumeratorInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::__ResourceReader__ResourceEnumerator* (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::GetEnumeratorInternal)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24e0714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetEnumeratorInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.FindPosForResource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Resources::ResourceReader::*)(::StringW)>(&::System::Resources::ResourceReader::FindPosForResource)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x24dffe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "FindPosForResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.CompareStringEqualsName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Resources::ResourceReader::*)(::StringW)>(&::System::Resources::ResourceReader::CompareStringEqualsName)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x24e24cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "CompareStringEqualsName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.AllocateStringForNameIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceReader::*)(int32_t, ByRef<int32_t>)>(&::System::Resources::ResourceReader::AllocateStringForNameIndex)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x24e26dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "AllocateStringForNameIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.GetValueForNameIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::GetValueForNameIndex)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x24e2fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetValueForNameIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::LoadString)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x24e03b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::LoadObject)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24e3840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ByRef<::System::Resources::ResourceTypeCode>)>(&::System::Resources::ResourceReader::LoadObject)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24e0664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceTypeCode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObjectV1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::LoadObjectV1)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24e3278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadObjectV1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._LoadObjectV1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::_LoadObjectV1)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x24e386c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "_LoadObjectV1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.LoadObjectV2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ByRef<::System::Resources::ResourceTypeCode>)>(&::System::Resources::ResourceReader::LoadObjectV2)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x24e3378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadObjectV2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceTypeCode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._LoadObjectV2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t, ByRef<::System::Resources::ResourceTypeCode>)>(&::System::Resources::ResourceReader::_LoadObjectV2)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x24e427c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "_LoadObjectV2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceTypeCode>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.DeserializeObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::DeserializeObject)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x24e40a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "DeserializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.ReadResources
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::ReadResources)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x24e1fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "ReadResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader._ReadResources
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Resources::ResourceReader::*)()>(&::System::Resources::ResourceReader::_ReadResources)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x24e49bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "_ReadResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Resources::ResourceReader.FindType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (::System::Resources::ResourceReader::*)(int32_t)>(&::System::Resources::ResourceReader::FindType)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x24e3478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "FindType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Resources::IResourceReader"
constexpr  System::Resources::ResourceReader::operator ::System::Resources::IResourceReader*() noexcept {
return static_cast<::System::Resources::IResourceReader*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Resources::ResourceReader::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Resources::ResourceReader::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void System::Resources::ResourceReader::__set__store(::System::IO::BinaryReader*  value)  {
::cordl_internals::setInstanceField<::System::IO::BinaryReader*, 0x10>(this, std::forward<::System::IO::BinaryReader*>(value));
}
constexpr ::System::IO::BinaryReader* System::Resources::ResourceReader::__get__store()  {
return ::cordl_internals::getInstanceField<::System::IO::BinaryReader*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::BinaryReader*> System::Resources::ResourceReader::__get__store() const {
return ::cordl_internals::getInstanceField<::System::IO::BinaryReader*, 0x10>(this);
}
constexpr void System::Resources::ResourceReader::__set__resCache(::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>* System::Resources::ResourceReader::__get__resCache()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*> System::Resources::ResourceReader::__get__resCache() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*, 0x18>(this);
}
constexpr void System::Resources::ResourceReader::__set__nameSectionOffset(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Resources::ResourceReader::__get__nameSectionOffset()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& System::Resources::ResourceReader::__get__nameSectionOffset() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void System::Resources::ResourceReader::__set__dataSectionOffset(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Resources::ResourceReader::__get__dataSectionOffset()  {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr int64_t const& System::Resources::ResourceReader::__get__dataSectionOffset() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this);
}
constexpr void System::Resources::ResourceReader::__set__nameHashes(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Resources::ResourceReader::__get__nameHashes()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Resources::ResourceReader::__get__nameHashes() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr void System::Resources::ResourceReader::__set__nameHashesPtr(::cordl_internals::Ptr<int32_t>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<int32_t>, 0x38>(this, std::forward<::cordl_internals::Ptr<int32_t>>(value));
}
constexpr ::cordl_internals::Ptr<int32_t>& System::Resources::ResourceReader::__get__nameHashesPtr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<int32_t>, 0x38>(this);
}
constexpr ::cordl_internals::Ptr<int32_t> const& System::Resources::ResourceReader::__get__nameHashesPtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<int32_t>, 0x38>(this);
}
constexpr void System::Resources::ResourceReader::__set__namePositions(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Resources::ResourceReader::__get__namePositions()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Resources::ResourceReader::__get__namePositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x40>(this);
}
constexpr void System::Resources::ResourceReader::__set__namePositionsPtr(::cordl_internals::Ptr<int32_t>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<int32_t>, 0x48>(this, std::forward<::cordl_internals::Ptr<int32_t>>(value));
}
constexpr ::cordl_internals::Ptr<int32_t>& System::Resources::ResourceReader::__get__namePositionsPtr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<int32_t>, 0x48>(this);
}
constexpr ::cordl_internals::Ptr<int32_t> const& System::Resources::ResourceReader::__get__namePositionsPtr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<int32_t>, 0x48>(this);
}
constexpr void System::Resources::ResourceReader::__set__typeTable(::ArrayW<::System::RuntimeType*,::Array<::System::RuntimeType*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::RuntimeType*,::Array<::System::RuntimeType*>*>, 0x50>(this, std::forward<::ArrayW<::System::RuntimeType*,::Array<::System::RuntimeType*>*>>(value));
}
constexpr ::ArrayW<::System::RuntimeType*,::Array<::System::RuntimeType*>*>& System::Resources::ResourceReader::__get__typeTable()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::RuntimeType*,::Array<::System::RuntimeType*>*>, 0x50>(this);
}
constexpr ::ArrayW<::System::RuntimeType*,::Array<::System::RuntimeType*>*> const& System::Resources::ResourceReader::__get__typeTable() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::RuntimeType*,::Array<::System::RuntimeType*>*>, 0x50>(this);
}
constexpr void System::Resources::ResourceReader::__set__typeNamePositions(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x58>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Resources::ResourceReader::__get__typeNamePositions()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x58>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Resources::ResourceReader::__get__typeNamePositions() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x58>(this);
}
constexpr void System::Resources::ResourceReader::__set__objFormatter(::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, 0x60>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Resources::ResourceReader::__get__objFormatter()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*> System::Resources::ResourceReader::__get__objFormatter() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, 0x60>(this);
}
constexpr void System::Resources::ResourceReader::__set__numResources(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Resources::ResourceReader::__get__numResources()  {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr int32_t const& System::Resources::ResourceReader::__get__numResources() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this);
}
constexpr void System::Resources::ResourceReader::__set__ums(::System::IO::UnmanagedMemoryStream*  value)  {
::cordl_internals::setInstanceField<::System::IO::UnmanagedMemoryStream*, 0x70>(this, std::forward<::System::IO::UnmanagedMemoryStream*>(value));
}
constexpr ::System::IO::UnmanagedMemoryStream* System::Resources::ResourceReader::__get__ums()  {
return ::cordl_internals::getInstanceField<::System::IO::UnmanagedMemoryStream*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::UnmanagedMemoryStream*> System::Resources::ResourceReader::__get__ums() const {
return ::cordl_internals::getInstanceField<::System::IO::UnmanagedMemoryStream*, 0x70>(this);
}
constexpr void System::Resources::ResourceReader::__set__version(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Resources::ResourceReader::__get__version()  {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
constexpr int32_t const& System::Resources::ResourceReader::__get__version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this);
}
inline ::System::Resources::ResourceReader* System::Resources::ResourceReader::New_ctor(::System::IO::Stream*  stream, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*  resCache)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::ResourceReader*>(stream, resCache));
}
inline void System::Resources::ResourceReader::_ctor(::System::IO::Stream*  stream, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*  resCache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW,::System::Resources::ResourceLocator>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stream, resCache);
}
inline void System::Resources::ResourceReader::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Resources::ResourceReader::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Resources::ResourceReader::Dispose(bool  disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, disposing);
}
inline int32_t System::Resources::ResourceReader::ReadUnalignedI4(::cordl_internals::Ptr<int32_t>  p)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "ReadUnalignedI4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p);
}
inline void System::Resources::ResourceReader::SkipString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "SkipString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t System::Resources::ResourceReader::GetNameHash(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetNameHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index);
}
inline int32_t System::Resources::ResourceReader::GetNamePosition(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetNamePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, index);
}
inline ::System::Collections::IEnumerator* System::Resources::ResourceReader::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline ::System::Collections::IDictionaryEnumerator* System::Resources::ResourceReader::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(*this, ___internal_method);
}
inline ::System::Resources::__ResourceReader__ResourceEnumerator* System::Resources::ResourceReader::GetEnumeratorInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetEnumeratorInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Resources::__ResourceReader__ResourceEnumerator*, false>(*this, ___internal_method);
}
inline int32_t System::Resources::ResourceReader::FindPosForResource(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "FindPosForResource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, name);
}
inline bool System::Resources::ResourceReader::CompareStringEqualsName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "CompareStringEqualsName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, name);
}
inline ::StringW System::Resources::ResourceReader::AllocateStringForNameIndex(int32_t  index, ByRef<int32_t>  dataOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "AllocateStringForNameIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, index, dataOffset);
}
inline ::System::Object* System::Resources::ResourceReader::GetValueForNameIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "GetValueForNameIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, index);
}
inline ::StringW System::Resources::ResourceReader::LoadString(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObject(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObject(int32_t  pos, ByRef<::System::Resources::ResourceTypeCode>  typeCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceTypeCode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObjectV1(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadObjectV1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::_LoadObjectV1(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "_LoadObjectV1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, pos);
}
inline ::System::Object* System::Resources::ResourceReader::LoadObjectV2(int32_t  pos, ByRef<::System::Resources::ResourceTypeCode>  typeCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "LoadObjectV2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceTypeCode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::_LoadObjectV2(int32_t  pos, ByRef<::System::Resources::ResourceTypeCode>  typeCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "_LoadObjectV2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceTypeCode>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, pos, typeCode);
}
inline ::System::Object* System::Resources::ResourceReader::DeserializeObject(int32_t  typeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "DeserializeObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, typeIndex);
}
inline void System::Resources::ResourceReader::ReadResources()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "ReadResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Resources::ResourceReader::_ReadResources()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "_ReadResources",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::RuntimeType* System::Resources::ResourceReader::FindType(int32_t  typeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::ResourceReader*>::get(),
                            "FindType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(*this, ___internal_method, typeIndex);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
