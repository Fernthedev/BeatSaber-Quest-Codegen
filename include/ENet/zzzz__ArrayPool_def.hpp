#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPool)
// Forward declare root types
namespace ENet {
class ArrayPool;
}
// Write type traits
MARK_REF_PTR_T(::ENet::ArrayPool);
// Type: ENet::ArrayPool
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15227))
// CS Name: ::ENet::ArrayPool*
class CORDL_TYPE ArrayPool : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_byteBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_byteBuffer() ;

static inline void setStaticF_pointerBuffer(::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*>  value) ;

static inline ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*> getStaticF_pointerBuffer() ;

/// @brief Method GetByteBuffer addr 0x21ef5f8 size 0x94 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetByteBuffer() ;

/// @brief Method GetPointerBuffer addr 0x21ef68c size 0x94 virtual false final false
static inline ::ArrayW<::cordl_internals::intptr_t,::Array<::cordl_internals::intptr_t>*> GetPointerBuffer() ;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayPool(ArrayPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayPool(ArrayPool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ArrayPool()  = default;
public:


// Fields

// Static field byteBuffer

// Static field pointerBuffer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::ArrayPool, 0x10>, "Size mismatch!");

} // namespace end def ENet
NEED_NO_BOX(::ENet::ArrayPool);
DEFINE_IL2CPP_ARG_TYPE(::ENet::ArrayPool*, "ENet", "ArrayPool");
