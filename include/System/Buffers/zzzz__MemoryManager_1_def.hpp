#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryManager_1)
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Buffers {
struct MemoryHandle;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class MemoryManager_1;
}
namespace System::Buffers {
template<::il2cpp_utils::il2cpp_reference_type T>
class MemoryManager_1<T>;
}
namespace System::Buffers {
template<>
class MemoryManager_1<uint8_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::MemoryManager_1);
// Type: System.Buffers::MemoryManager`1
// Type: System.Buffers::MemoryManager`1
namespace System::Buffers {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3885)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3885), inst: 741 })
// CS Name: ::System.Buffers::MemoryManager`1<T>*
class CORDL_TYPE MemoryManager_1<uint8_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetSpan addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Span_1<uint8_t> GetSpan() ;

/// @brief Method Pin addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Buffers::MemoryHandle Pin(int32_t  elementIndex) ;

/// @brief Method TryGetArray addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryGetArray(ByRef<::System::ArraySegment_1<uint8_t>>  segment) ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryManager_1(MemoryManager_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryManager_1(MemoryManager_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryManager_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
// Type: System.Buffers::MemoryManager`1
namespace System::Buffers {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3885)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3885), inst: 2 })
// CS Name: ::System.Buffers::MemoryManager`1<T>*
class CORDL_TYPE MemoryManager_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetSpan addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Span_1<T> GetSpan() ;

/// @brief Method Pin addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Buffers::MemoryHandle Pin(int32_t  elementIndex) ;

/// @brief Method TryGetArray addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool TryGetArray(ByRef<::System::ArraySegment_1<T>>  segment) ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryManager_1(MemoryManager_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryManager_1(MemoryManager_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryManager_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::MemoryManager_1, "System.Buffers", "MemoryManager`1");
