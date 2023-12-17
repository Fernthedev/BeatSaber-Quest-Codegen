#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadedSeedGenerator)
namespace Org::BouncyCastle::Crypto::Prng {
class __ThreadedSeedGenerator__SeedGenerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class ThreadedSeedGenerator;
}
namespace Org::BouncyCastle::Crypto::Prng {
class __ThreadedSeedGenerator__SeedGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator);
// Type: ::SeedGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1117))
// CS Name: ::ThreadedSeedGenerator::SeedGenerator*
class CORDL_TYPE __ThreadedSeedGenerator__SeedGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field counter offset 0x10
 __declspec(property(get=__get_counter, put=__set_counter)) int32_t  counter;

/// @brief Field stop offset 0x14
 __declspec(property(get=__get_stop, put=__set_stop)) bool  stop;

constexpr void __set_counter(int32_t  value) ;

constexpr int32_t& __get_counter() ;

constexpr int32_t const& __get_counter() const;

constexpr void __set_stop(bool  value) ;

constexpr bool& __get_stop() ;

constexpr bool const& __get_stop() const;

/// @brief Method Run addr 0xf44d88 size 0x44 virtual false final false
inline void Run(::System::Object*  ignored) ;

/// @brief Method GenerateSeed addr 0xf44c78 size 0x108 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateSeed(int32_t  numBytes, bool  fast) ;

/// @brief Method DoGenerateSeed addr 0xf44dcc size 0x204 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DoGenerateSeed(int32_t  numBytes, bool  fast) ;

static inline ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xf44c50 size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadedSeedGenerator__SeedGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ThreadedSeedGenerator__SeedGenerator(__ThreadedSeedGenerator__SeedGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadedSeedGenerator__SeedGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ThreadedSeedGenerator__SeedGenerator(__ThreadedSeedGenerator__SeedGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ThreadedSeedGenerator__SeedGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::ThreadedSeedGenerator
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1118))
// CS Name: ::Org.BouncyCastle.Crypto.Prng::ThreadedSeedGenerator*
class CORDL_TYPE ThreadedSeedGenerator : public ::System::Object {
public:
// Declarations
using SeedGenerator = ::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GenerateSeed addr 0xf44bc8 size 0x88 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GenerateSeed(int32_t  numBytes, bool  fast) ;

static inline ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator* New_ctor() ;

/// @brief Method .ctor addr 0xf44d80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadedSeedGenerator(ThreadedSeedGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadedSeedGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadedSeedGenerator(ThreadedSeedGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadedSeedGenerator()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*, "Org.BouncyCastle.Crypto.Prng", "ThreadedSeedGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::__ThreadedSeedGenerator__SeedGenerator*, "Org.BouncyCastle.Crypto.Prng", "ThreadedSeedGenerator/SeedGenerator");
