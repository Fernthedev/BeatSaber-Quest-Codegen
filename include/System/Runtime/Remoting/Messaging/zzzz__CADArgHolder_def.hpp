#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADArgHolder)
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CADArgHolder);
// Type: System.Runtime.Remoting.Messaging::CADArgHolder
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3152))
// CS Name: ::System.Runtime.Remoting.Messaging::CADArgHolder*
class CORDL_TYPE CADArgHolder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field index offset 0x10
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

static inline ::System::Runtime::Remoting::Messaging::CADArgHolder* New_ctor(int32_t  i) ;

/// @brief Method .ctor addr 0x24a7bb8 size 0x28 virtual false final false
inline void _ctor(int32_t  i) ;

// Ctor Parameters [CppParam { name: "", ty: "CADArgHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CADArgHolder(CADArgHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CADArgHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CADArgHolder(CADArgHolder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CADArgHolder()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADArgHolder, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADArgHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADArgHolder*, "System.Runtime.Remoting.Messaging", "CADArgHolder");
