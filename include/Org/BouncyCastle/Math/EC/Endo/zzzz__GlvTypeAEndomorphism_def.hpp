#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GlvTypeAEndomorphism)
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAEndomorphism;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism);
// Type: Org.BouncyCastle.Math.EC.Endo::GlvTypeAEndomorphism
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1521))
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::GlvTypeAEndomorphism*
class CORDL_TYPE GlvTypeAEndomorphism : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_parameters offset 0x10
 __declspec(property(get=__get_m_parameters, put=__set_m_parameters)) ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*  m_parameters;

/// @brief Field m_pointMap offset 0x18
 __declspec(property(get=__get_m_pointMap, put=__set_m_pointMap)) ::Org::BouncyCastle::Math::EC::ECPointMap*  m_pointMap;

 __declspec(property(get=get_PointMap)) ::Org::BouncyCastle::Math::EC::ECPointMap*  PointMap;

 __declspec(property(get=get_HasEfficientPointMap)) bool  HasEfficientPointMap;

/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism"
constexpr operator  ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
constexpr operator  ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*() noexcept;

constexpr void __set_m_parameters(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* __get_m_parameters() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*> __get_m_parameters() const;

constexpr void __set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap*  value) ;

constexpr ::Org::BouncyCastle::Math::EC::ECPointMap* __get_m_pointMap() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> __get_m_pointMap() const;

static inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*  parameters) ;

/// @brief Method .ctor addr 0x10353c8 size 0xb8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve*  curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*  parameters) ;

/// @brief Method DecomposeScalar addr 0x1035480 size 0x7c virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> DecomposeScalar(::Org::BouncyCastle::Math::BigInteger*  k) ;

/// @brief Method get_PointMap addr 0x10354fc size 0x8 virtual true final false
inline ::Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap() ;

/// @brief Method get_HasEfficientPointMap addr 0x1035504 size 0x8 virtual true final false
inline bool get_HasEfficientPointMap() ;

// Ctor Parameters [CppParam { name: "", ty: "GlvTypeAEndomorphism", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlvTypeAEndomorphism(GlvTypeAEndomorphism && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlvTypeAEndomorphism", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlvTypeAEndomorphism(GlvTypeAEndomorphism const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GlvTypeAEndomorphism()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeAEndomorphism");
