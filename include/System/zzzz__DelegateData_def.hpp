#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DelegateData)
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class DelegateData;
}
// Write type traits
MARK_REF_PTR_T(::System::DelegateData);
// Type: System::DelegateData
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2588))
// CS Name: ::System::DelegateData*
class CORDL_TYPE DelegateData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field target_type offset 0x10
 __declspec(property(get=__get_target_type, put=__set_target_type)) ::System::Type*  target_type;

/// @brief Field method_name offset 0x18
 __declspec(property(get=__get_method_name, put=__set_method_name)) ::StringW  method_name;

/// @brief Field curried_first_arg offset 0x20
 __declspec(property(get=__get_curried_first_arg, put=__set_curried_first_arg)) bool  curried_first_arg;

constexpr void __set_target_type(::System::Type*  value) ;

constexpr ::System::Type* __get_target_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_target_type() const;

constexpr void __set_method_name(::StringW  value) ;

constexpr ::StringW& __get_method_name() ;

constexpr ::StringW const& __get_method_name() const;

constexpr void __set_curried_first_arg(bool  value) ;

constexpr bool& __get_curried_first_arg() ;

constexpr bool const& __get_curried_first_arg() const;

static inline ::System::DelegateData* New_ctor() ;

/// @brief Method .ctor addr 0x25f7bf0 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DelegateData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegateData(DelegateData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegateData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegateData(DelegateData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DelegateData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DelegateData, 0x28>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::DelegateData);
DEFINE_IL2CPP_ARG_TYPE(::System::DelegateData*, "System", "DelegateData");
