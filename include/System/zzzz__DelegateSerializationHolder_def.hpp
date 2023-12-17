#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DelegateSerializationHolder)
namespace System {
class __DelegateSerializationHolder__DelegateEntry;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System {
class Delegate;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class DelegateSerializationHolder;
}
namespace System {
class __DelegateSerializationHolder__DelegateEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::DelegateSerializationHolder);
MARK_REF_PTR_T(::System::__DelegateSerializationHolder__DelegateEntry);
// Type: ::DelegateEntry
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2590))
// CS Name: ::DelegateSerializationHolder::DelegateEntry*
class CORDL_TYPE __DelegateSerializationHolder__DelegateEntry : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::StringW  type;

/// @brief Field assembly offset 0x18
 __declspec(property(get=__get_assembly, put=__set_assembly)) ::StringW  assembly;

/// @brief Field target offset 0x20
 __declspec(property(get=__get_target, put=__set_target)) ::System::Object*  target;

/// @brief Field targetTypeAssembly offset 0x28
 __declspec(property(get=__get_targetTypeAssembly, put=__set_targetTypeAssembly)) ::StringW  targetTypeAssembly;

/// @brief Field targetTypeName offset 0x30
 __declspec(property(get=__get_targetTypeName, put=__set_targetTypeName)) ::StringW  targetTypeName;

/// @brief Field methodName offset 0x38
 __declspec(property(get=__get_methodName, put=__set_methodName)) ::StringW  methodName;

/// @brief Field delegateEntry offset 0x40
 __declspec(property(get=__get_delegateEntry, put=__set_delegateEntry)) ::System::__DelegateSerializationHolder__DelegateEntry*  delegateEntry;

constexpr void __set_type(::StringW  value) ;

constexpr ::StringW& __get_type() ;

constexpr ::StringW const& __get_type() const;

constexpr void __set_assembly(::StringW  value) ;

constexpr ::StringW& __get_assembly() ;

constexpr ::StringW const& __get_assembly() const;

constexpr void __set_target(::System::Object*  value) ;

constexpr ::System::Object* __get_target() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_target() const;

constexpr void __set_targetTypeAssembly(::StringW  value) ;

constexpr ::StringW& __get_targetTypeAssembly() ;

constexpr ::StringW const& __get_targetTypeAssembly() const;

constexpr void __set_targetTypeName(::StringW  value) ;

constexpr ::StringW& __get_targetTypeName() ;

constexpr ::StringW const& __get_targetTypeName() const;

constexpr void __set_methodName(::StringW  value) ;

constexpr ::StringW& __get_methodName() ;

constexpr ::StringW const& __get_methodName() const;

constexpr void __set_delegateEntry(::System::__DelegateSerializationHolder__DelegateEntry*  value) ;

constexpr ::System::__DelegateSerializationHolder__DelegateEntry* __get_delegateEntry() ;

constexpr ::cordl_internals::to_const_pointer<::System::__DelegateSerializationHolder__DelegateEntry*> __get_delegateEntry() const;

static inline ::System::__DelegateSerializationHolder__DelegateEntry* New_ctor(::System::Delegate*  del, ::StringW  targetLabel) ;

/// @brief Method .ctor addr 0x25f9f50 size 0x11c virtual false final false
inline void _ctor(::System::Delegate*  del, ::StringW  targetLabel) ;

/// @brief Method DeserializeDelegate addr 0x25f9cd8 size 0x278 virtual false final false
inline ::System::Delegate* DeserializeDelegate(::System::Runtime::Serialization::SerializationInfo*  info, int32_t  index) ;

// Ctor Parameters [CppParam { name: "", ty: "__DelegateSerializationHolder__DelegateEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DelegateSerializationHolder__DelegateEntry(__DelegateSerializationHolder__DelegateEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DelegateSerializationHolder__DelegateEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DelegateSerializationHolder__DelegateEntry(__DelegateSerializationHolder__DelegateEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DelegateSerializationHolder__DelegateEntry()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__DelegateSerializationHolder__DelegateEntry, 0x48>, "Size mismatch!");

} // namespace end def System
// Type: System::DelegateSerializationHolder
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2591))
// CS Name: ::System::DelegateSerializationHolder*
class CORDL_TYPE DelegateSerializationHolder : public ::System::Object {
public:
// Declarations
using DelegateEntry = ::System::__DelegateSerializationHolder__DelegateEntry;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _delegate offset 0x10
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Delegate*  _delegate;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr operator  ::System::Runtime::Serialization::IObjectReference*() noexcept;

constexpr void __set__delegate(::System::Delegate*  value) ;

constexpr ::System::Delegate* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> __get__delegate() const;

static inline ::System::DelegateSerializationHolder* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method .ctor addr 0x25f9ad8 size 0x200 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method GetDelegateData addr 0x25f96b8 size 0x248 virtual false final false
static inline void GetDelegateData(::System::Delegate*  instance, ::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  ctx) ;

/// @brief Method GetObjectData addr 0x25fa06c size 0x40 virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetRealObject addr 0x25fa0ac size 0x8 virtual true final true
inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "DelegateSerializationHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegateSerializationHolder(DelegateSerializationHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegateSerializationHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegateSerializationHolder(DelegateSerializationHolder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DelegateSerializationHolder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DelegateSerializationHolder, 0x18>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::DelegateSerializationHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::DelegateSerializationHolder*, "System", "DelegateSerializationHolder");
NEED_NO_BOX(::System::__DelegateSerializationHolder__DelegateEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::__DelegateSerializationHolder__DelegateEntry*, "System", "DelegateSerializationHolder/DelegateEntry");
