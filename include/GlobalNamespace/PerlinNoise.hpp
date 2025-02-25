// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PerlinNoise
  // [TokenAttribute] Offset: FFFFFFFF
  class PerlinNoise : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PerlinNoise
    PerlinNoise() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE07F80
    // Get static field: static private readonly System.Int32[] permutation
    static ::Array<int>* _get_permutation();
    // Set static field: static private readonly System.Int32[] permutation
    static void _set_permutation(::Array<int>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE07F90
    // Get static field: static private readonly System.Int32[] p
    static ::Array<int>* _get_p();
    // Set static field: static private readonly System.Int32[] p
    static void _set_p(::Array<int>* value);
    // static private System.Void .cctor()
    // Offset: 0x126F1C4
    static void _cctor();
    // static public System.Single OctavePerlin3D(System.Single x, System.Single y, System.Single z, System.Int32 octaves, System.Single persistence, System.Int32 repeat)
    // Offset: 0x126F2D0
    static float OctavePerlin3D(float x, float y, float z, int octaves, float persistence, int repeat);
    // static public System.Single Perlin3D(System.Single x, System.Single y, System.Single z, System.Int32 repeat)
    // Offset: 0x126F3C4
    static float Perlin3D(float x, float y, float z, int repeat);
    // static private System.Int32 Inc(System.Int32 num, System.Int32 repeat)
    // Offset: 0x126F970
    static int Inc(int num, int repeat);
    // static private System.Single Grad3D(System.Int32 hash, System.Single x, System.Single y, System.Single z)
    // Offset: 0x126F988
    static float Grad3D(int hash, float x, float y, float z);
    // static private System.Single Fade(System.Single t)
    // Offset: 0x126F944
    static float Fade(float t);
    // static private System.Single Lerp(System.Single a, System.Single b, System.Single x)
    // Offset: 0x126FA04
    static float Lerp(float a, float b, float x);
    // public System.Void .ctor()
    // Offset: 0x126FA14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PerlinNoise* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PerlinNoise::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PerlinNoise*, creationType>()));
    }
  }; // PerlinNoise
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PerlinNoise*, "", "PerlinNoise");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PerlinNoise::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerlinNoise*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::OctavePerlin3D
// Il2CppName: OctavePerlin3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, int, float, int)>(&GlobalNamespace::PerlinNoise::OctavePerlin3D)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* octaves = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* persistence = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* repeat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerlinNoise*), "OctavePerlin3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, octaves, persistence, repeat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Perlin3D
// Il2CppName: Perlin3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float, int)>(&GlobalNamespace::PerlinNoise::Perlin3D)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* repeat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerlinNoise*), "Perlin3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z, repeat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Inc
// Il2CppName: Inc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&GlobalNamespace::PerlinNoise::Inc)> {
  static const MethodInfo* get() {
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* repeat = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerlinNoise*), "Inc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{num, repeat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Grad3D
// Il2CppName: Grad3D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(int, float, float, float)>(&GlobalNamespace::PerlinNoise::Grad3D)> {
  static const MethodInfo* get() {
    static auto* hash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerlinNoise*), "Grad3D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash, x, y, z});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Fade
// Il2CppName: Fade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::PerlinNoise::Fade)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerlinNoise*), "Fade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::Lerp
// Il2CppName: Lerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&GlobalNamespace::PerlinNoise::Lerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerlinNoise*), "Lerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerlinNoise::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
