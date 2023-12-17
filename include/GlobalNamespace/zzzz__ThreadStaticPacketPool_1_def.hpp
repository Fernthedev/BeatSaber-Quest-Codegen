#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadStaticPacketPool_1)
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ThreadStaticPacketPool_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class ThreadStaticPacketPool_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ThreadStaticPacketPool_1);
// Type: ::ThreadStaticPacketPool`1
// Type: ::ThreadStaticPacketPool`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12811)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12811), inst: 2 })
// CS Name: ::ThreadStaticPacketPool`1<T>*
class CORDL_TYPE ThreadStaticPacketPool_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method get_pool addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::GlobalNamespace::PacketPool_1<T>* get_pool() ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStaticPacketPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadStaticPacketPool_1(ThreadStaticPacketPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadStaticPacketPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadStaticPacketPool_1(ThreadStaticPacketPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadStaticPacketPool_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ThreadStaticPacketPool_1, "", "ThreadStaticPacketPool`1");
