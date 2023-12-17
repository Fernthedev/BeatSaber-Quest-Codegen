#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumEqualityComparer_1)
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
class SerializationInfo;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class EnumEqualityComparer_1;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint32_t> T>
class EnumEqualityComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class EnumEqualityComparer_1<T>;
}
namespace System::Collections::Generic {
template<::cordl_internals::is_or_is_backed_by<uint16_t> T>
class EnumEqualityComparer_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::EnumEqualityComparer_1);
// Type: System.Collections.Generic::EnumEqualityComparer`1
// Type: System.Collections.Generic::EnumEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3874)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1699 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3874), inst: 7296 })
// CS Name: ::System.Collections.Generic::EnumEqualityComparer`1<T>*
class CORDL_TYPE EnumEqualityComparer_1<T> : public ::System::Collections::Generic::EqualityComparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<T>)]{};

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(T  x, T  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(T  obj) ;

static inline ::System::Collections::Generic::EnumEqualityComparer_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::EnumEqualityComparer_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  information, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  information, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumEqualityComparer_1(EnumEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumEqualityComparer_1(EnumEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::EnumEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<uint16_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3874)), TypeDefinitionIndex(TypeDefinitionIndex(3869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1699 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3874), inst: 6441 })
// CS Name: ::System.Collections.Generic::EnumEqualityComparer`1<T>*
class CORDL_TYPE EnumEqualityComparer_1<T> : public ::System::Collections::Generic::EqualityComparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<T>)]{};

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(T  x, T  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(T  obj) ;

static inline ::System::Collections::Generic::EnumEqualityComparer_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::EnumEqualityComparer_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  information, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  information, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumEqualityComparer_1(EnumEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumEqualityComparer_1(EnumEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::EnumEqualityComparer`1
namespace System::Collections::Generic {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3874)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3869), inst: 1699 }), TypeDefinitionIndex(TypeDefinitionIndex(3869))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3874), inst: 974 })
// CS Name: ::System.Collections.Generic::EnumEqualityComparer`1<T>*
class CORDL_TYPE EnumEqualityComparer_1<T> : public ::System::Collections::Generic::EqualityComparer_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Collections::Generic::EqualityComparer_1<T>)]{};

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(T  x, T  y) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode(T  obj) ;

static inline ::System::Collections::Generic::EnumEqualityComparer_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::EnumEqualityComparer_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo*  information, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  information, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumEqualityComparer_1(EnumEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumEqualityComparer_1(EnumEqualityComparer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EnumEqualityComparer_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::EnumEqualityComparer_1, "System.Collections.Generic", "EnumEqualityComparer`1");
