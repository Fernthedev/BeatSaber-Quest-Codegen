#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InvariantComparer)
namespace System::Collections {
class IComparer;
}
namespace System {
class Object;
}
namespace System::Globalization {
class CompareInfo;
}
// Forward declare root types
namespace System {
class InvariantComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::InvariantComparer);
// Type: System::InvariantComparer
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8868))
// CS Name: ::System::InvariantComparer*
class CORDL_TYPE InvariantComparer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_compareInfo offset 0x10
 __declspec(property(get=__get_m_compareInfo, put=__set_m_compareInfo)) ::System::Globalization::CompareInfo*  m_compareInfo;

/// @brief Convert operator to "::System::Collections::IComparer"
constexpr operator  ::System::Collections::IComparer*() noexcept;

constexpr void __set_m_compareInfo(::System::Globalization::CompareInfo*  value) ;

constexpr ::System::Globalization::CompareInfo* __get_m_compareInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> __get_m_compareInfo() const;

static inline void setStaticF_Default(::System::InvariantComparer*  value) ;

static inline ::System::InvariantComparer* getStaticF_Default() ;

static inline ::System::InvariantComparer* New_ctor() ;

/// @brief Method .ctor addr 0x29481b0 size 0x7c virtual false final false
inline void _ctor() ;

/// @brief Method Compare addr 0x294822c size 0xec virtual true final true
inline int32_t Compare(::System::Object*  a, ::System::Object*  b) ;

// Ctor Parameters [CppParam { name: "", ty: "InvariantComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InvariantComparer(InvariantComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvariantComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvariantComparer(InvariantComparer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InvariantComparer()  = default;
public:


// Fields

// Static field Default


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InvariantComparer, 0x18>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::InvariantComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::InvariantComparer*, "System", "InvariantComparer");
