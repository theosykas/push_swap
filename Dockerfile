
# Base image Ubuntu 22.04
FROM ubuntu:22.04

# Installer les dépendances essentielles
RUN apt-get update && apt-get install -y \
    build-essential \
    valgrind \
    gcc \
    make \
    nano \
    git \
    && rm -rf /var/lib/apt/lists/*

# Créer un répertoire de travail
WORKDIR /workspace

# Copier le projet dans le conteneur
COPY . /workspace

# Définir le dossier de travail dans le conteneur
WORKDIR /workspace

# Commande par défaut : bash
CMD ["bash"]

#docker run -it --rm -v "$(pwd)":/workspace push_swap_dev cmd