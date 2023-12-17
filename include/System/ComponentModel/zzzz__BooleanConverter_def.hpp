#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(BooleanConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class __TypeConverter__StandardValuesCollection;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class BooleanConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::BooleanConverter);
// Type: System.ComponentModel::BooleanConverter
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9408))
// CS Name: ::System.ComponentModel::BooleanConverter*
class CORDL_TYPE BooleanConverter : public ::System::ComponentModel::TypeConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::ComponentModel::TypeConverter)]{};

static inline void setStaticF_s_values(::System::ComponentModel::__TypeConverter__StandardValuesCollection*  value) ;

static inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* getStaticF_s_values() ;

/// @brief Method CanConvertFrom addr 0x2906d74 size 0xc8 virtual true final false
inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Type*  sourceType) ;

/// @brief Method ConvertFrom addr 0x2906e3c size 0x200 virtual true final false
inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext*  context, ::System::Globalization::CultureInfo*  culture, ::System::Object*  value) ;

/// @brief Method GetStandardValues addr 0x290703c size 0x164 virtual true final false
inline ::System::ComponentModel::__TypeConverter__StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesExclusive addr 0x29071a0 size 0x8 virtual true final false
inline bool GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext*  context) ;

/// @brief Method GetStandardValuesSupported addr 0x29071a8 size 0x8 virtual true final false
inline bool GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext*  context) ;

static inline ::System::ComponentModel::BooleanConverter* New_ctor() ;

/// @brief Method .ctor addr 0x29071b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BooleanConverter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BooleanConverter(BooleanConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BooleanConverter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BooleanConverter(BooleanConverter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BooleanConverter()  = default;
public:


// Fields

// Static field s_values


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::BooleanConverter, 0x10>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::BooleanConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::BooleanConverter*, "System.ComponentModel", "BooleanConverter");
