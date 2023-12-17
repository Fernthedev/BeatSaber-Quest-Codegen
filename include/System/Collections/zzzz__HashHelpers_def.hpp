#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashHelpers)
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
// Forward declare root types
namespace System::Collections {
class HashHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::HashHelpers);
// Type: System.Collections::HashHelpers
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3754))
// CS Name: ::System.Collections::HashHelpers*
class CORDL_TYPE HashHelpers : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_primes(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_primes() ;

static inline void setStaticF_s_serializationInfoTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*,::System::Runtime::Serialization::SerializationInfo*>*  value) ;

static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*,::System::Runtime::Serialization::SerializationInfo*>* getStaticF_s_serializationInfoTable() ;

/// @brief Method IsPrime addr 0x257c4c8 size 0xb0 virtual false final false
static inline bool IsPrime(int32_t  candidate) ;

/// @brief Method GetPrime addr 0x257c578 size 0x190 virtual false final false
static inline int32_t GetPrime(int32_t  min) ;

/// @brief Method ExpandPrime addr 0x257c708 size 0x84 virtual false final false
static inline int32_t ExpandPrime(int32_t  oldSize) ;

/// @brief Method get_SerializationInfoTable addr 0x257c78c size 0xe0 virtual false final false
static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*,::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable() ;

// Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashHelpers(HashHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashHelpers(HashHelpers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HashHelpers()  = default;
public:


// Fields

// Static field primes

// Static field s_serializationInfoTable


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::HashHelpers, 0x10>, "Size mismatch!");

} // namespace end def System::Collections
NEED_NO_BOX(::System::Collections::HashHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::HashHelpers*, "System.Collections", "HashHelpers");
